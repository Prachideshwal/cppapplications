#include <image_processing.h>

void resizeImage(const cv::Mat& inputImage, cv::Mat& outputImage, int width, int height) {
    cv::resize(inputImage, outputImage, cv::Size(width, height));
}

void convertToGrayscale(const cv::Mat& inputImage, cv::Mat& outputImage) {
    cv::cvtColor(inputImage, outputImage, cv::COLOR_BGR2GRAY);
}

void drawRectangleInCenter(cv::Mat& image, int rectWidth, int rectHeight) {
    int centerX = image.cols / 2;
    int centerY = image.rows / 2;
    cv::Point topLeft(centerX - rectWidth / 2, centerY - rectHeight / 2);
    cv::Point bottomRight(centerX + rectWidth / 2, centerY + rectHeight / 2);
    cv::rectangle(image, topLeft, bottomRight, cv::Scalar(255), 2);
}
