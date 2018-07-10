
include_directories(.)
cuda_add_executable(emptygaz_exe main.cpp cuda_sample.cu)
target_link_libraries(emptygaz_exe  ${CUDA_LIBRARIES} ${QT_LIBRARIES} ${Boost_LIBRARIES} ${CUDA_curand_LIBRARY})
