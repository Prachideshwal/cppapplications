# cmake_minimum_required(VERSION 3.10)
# project(new)
# set(CMAKE_CXX_STANDARD 14 )

# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(OpenCV_DIR "~/opencv4.5-custom/lib/cmake/opencv4")
# find_package(OpenCV REQUIRED)
# include_directories(${OpenCV_INCLUDE_DIRS} include)
# add_executable(new src/main.cpp src/image_processing.cpp)
# target_link_libraries(new ${OpenCV_LIBS})


# # Find OpenCV package
# set(OpenCV_DIR "~/opencv4.5-custom/lib/cmake/opencv4")
# find_package(OpenCV REQUIRED)

# # Include directories
# include_directories(${OpenCV_INCLUDE_DIRS} include)

# # Add executable
# add_executable(CPPApplications src/main.cpp src/image_processing.cpp)

# # Link OpenCV libraries
# target_link_libraries(CPPApplications ${OpenCV_LIBS})


cmake_minimum_required(VERSION 3.10)
project(cppapplications)

set(CMAKE_CXX_STANDARD 14)

# Define the path to your custom-built OpenCV
set(OpenCV_DIR "${CMAKE_SOURCE_DIR}/opencv4.5-tmp/opencv/build")

# Find the OpenCV package
find_package(OpenCV REQUIRED)

# Include directories
include_directories(${OpenCV_INCLUDE_DIRS} include)

# Add executable
add_executable(cppapplications src/main.cpp src/image_processing.cpp)

# Link OpenCV libraries
target_link_libraries(cppapplications ${OpenCV_LIBS})

# Additional settings
set(CMAKE_BUILD_TYPE Debug)


message(STATUS "OpenCV libraries: ${OpenCV_LIBS}")
message(STATUS "OpenCV include dirs: ${OpenCV_INCLUDE_DIRS}")

# cmake -D CMAKE_BUILD_TYPE=DEBUG \
# -D CMAKE_INSTALL_PREFIX=opencv4.5-custom \
# -D OPENCV_EXTRA_MODULES_PATH=../../opencv_contrib/modules \
# -D OPENCV_GENERATE_PKGCONFIG=ON \
# -D BUILD_EXAMPLES=OFF \
# -D WITH_TIFF=OFF ..
