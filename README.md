# CPPApplications

This project demonstrates a simple C++ application using OpenCV for image processing tasks. The application resizes an image, converts it to grayscale, and draws a rectangle in the center of the image.

## Prerequisites

Ensure you have the following installed on your system:
- CMake
- GCC (g++) compiler
- OpenCV 4.5.1 (built from source with contrib modules)



## Building the Application

1. Clone the repository 
   ```sh
    git clone REPOSITORY_LINK
    ```


1. **Navigate to the Project Directory**

    ```sh
    cd cppapplications
    ```

2. **Create a Build Directory and Navigate into it**

    ```sh
    mkdir build && cd build
    ```

3. **Run CMake to Generate the Build Files**

    ```sh
    cmake ..
    ```

4. **Build the Project**

    ```sh
    make
    ```

## Building OpenCV from Source


1. **Download and Extract OpenCV Sources**
    In cppappilcations/
    ```sh
    mkdir opencv4.5-tmp && cd opencv4.5-tmp
    wget https://github.com/opencv/opencv/archive/4.5.1.zip -O opencv.zip
    wget https://github.com/opencv/opencv_contrib/archive/4.5.1.zip -O opencv_contrib.zip
    unzip opencv.zip
    unzip opencv_contrib.zip
    mv opencv-4.5.1 opencv
    mv opencv_contrib-4.5.1 opencv_contrib
    ```

2. **Build and Install OpenCV**

    ```sh
    
 cmake -D CMAKE_BUILD_TYPE=DEBUG \
    -D CMAKE_INSTALL_PREFIX=opencv4.5-custom \
    -D OPENCV_EXTRA_MODULES_PATH=../../opencv_contrib/modules \
    -D OPENCV_GENERATE_PKGCONFIG=ON \
    -D BUILD_EXAMPLES=OFF \
    -D WITH_TIFF=OFF ..

    make -j12
    sudo make install
    ```
## Running the Application

1. **Ensure you have an Input Image**

    Place an input image named `input.png` in the `data` directory.

2. **Run the Application**

    ```sh
    ./cppapplications
    ```

3. **Output**

    The application processes the `input.png` image and saves the result as `output.png` in the `data` directory.

## Verify OpenCV Version

You can verify the OpenCV version being used by the application by running:

  ```sh
  ldd ./cppapplications | grep opencv
  ```

