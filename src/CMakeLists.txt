
include_directories(.)
cuda_add_executable(emptygaz_exe main.cpp cuda_sample.cu)
target_link_libraries(emptygaz_exe  ${CUDA_LIBRARIES} ${QT_LIBRARIES} ${Boost_LIBRARIES} ${CUDA_curand_LIBRARY})


## Main 2 sans Qt mais avec JsonCPP
# https://github.com/open-source-parsers/jsoncpp
find_package(PkgConfig REQUIRED)
pkg_check_modules(JSONCPP jsoncpp)

include_directories(${JSONCPP_INCLUDE_DIRS})
message("=========================================================")
message("${JSONCPP_INCLUDE_DIRS}")
cuda_add_executable(emptygaz_json mainjson.cpp)
target_link_libraries( emptygaz_json ${JSONCPP_LIBRARIES} )
