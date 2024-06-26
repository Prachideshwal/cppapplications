#include <image_processing.h>


int main() {
    // Read the input image
    Mat image = imread("../data/input.png");
    if (image.empty()) {
        cerr << "Error: Unable to load image!" << endl;
        return -1;
    }

    // Resize the image
    Mat resizedImage;
    resizeImage(image, resizedImage, 300, 300);  // Resize to 300x300

    // Convert the image to grayscale
    Mat grayImage;
    convertToGrayscale(resizedImage, grayImage);

    // Draw a rectangle in the center of the image
    drawRectangleInCenter(grayImage, 100, 50);

    // Save the result
    if (imwrite("../data/output.jpg", grayImage)) {
        cout << "Image processing complete and output saved successfully." << endl;
    } else {
        cerr << "Error: Unable to save the output image!" << endl;
        return -1;
    }

    return 0;
}
