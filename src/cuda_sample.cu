#include <cuda_runtime.h>
#include "cuda_sample.h"


template <typename T, typename X>
inline __host__ __device__ T iDivUp(const T a, const X b) {
  const T c = (T)b;
  const T mod = a - c * (a / c);  // a % c;
  const T div = a / c;
  if (mod != 0)
    return div + 1;
  else
    return div;
}

__global__ void un_kernel(float *a, int N){
  int offset = threadIdx.x + blockIdx.x *  blockDim.x;
  if(offset < N)
    a[offset] = 42;
}

void une_fonction(float *a, int N){
  dim3 grid(iDivUp(N, 512));
  dim3 threads(512);
  un_kernel<<<grid, threads>>> (a, N);
}
