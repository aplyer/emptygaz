#include <cuda_runtime.h>
#include <QSettings>
#include <QString>
#include <QStringList>
#include <algorithm>
#include <boost/filesystem.hpp>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <iostream>
#include <iostream>
#include <iterator>
#include <string>

#include "cuda_sample.h"

int main(int argc, char **argv){
    std::string conf_fname(argv[1]);
    QSettings * settings = new QSettings(argv[1], QSettings::IniFormat);
    QString strKey("toto/");
    QString titi = settings->value(strKey + "titi", "").toString();
    std::cout << "ouvre fichier : " << conf_fname << std::endl;
    std::cout << "param toto::titi : " << titi.toStdString() << std::endl;
    std::cout << "test GPU" << std::endl;
    cudaSetDevice(0);
    float *gpu_d;
    int N = 89432;
    cudaMalloc(&gpu_d , N * sizeof(float));
    une_fonction(gpu_d, N);
    std::cout << "on recupere le resultat"<< std::endl;
    float *gpu_h = new float[N];
    cudaMemcpy(gpu_h, gpu_d, N*sizeof(float), cudaMemcpyDeviceToHost);
    float val = 0;
    for(int i=0; i < N; ++i)
    val += gpu_h[i];
    std::cout << "resultat GPU (42?) : " << val / N << std::endl;

    return 0;
    boost::filesystem::create_directory("./tutu");
}
