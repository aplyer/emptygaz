CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

PROJECT(emptygaz)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

find_package(CUDA REQUIRED)
find_package(Threads REQUIRED)
find_package(Qt4 REQUIRED)
FIND_PACKAGE( Boost 1.40 COMPONENTS system filesystem REQUIRED )


add_definitions(-std=gnu++11)
add_definitions(-D__LINUX__)
add_definitions(-DDEBUG)
set(CUDA_NVCC_FLAGS ${CUDA_NVCC_FLAGS};-std=c++11)
set(CUDA_NVCC_FLAGS ${CUDA_NVCC_FLAGS};-use_fast_math)


INCLUDE(${QT_USE_FILE})

add_subdirectory(src)
