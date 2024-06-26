#ifndef IMAGE_PROCESSING_H
#define IMAGE_PROCESSING_H
#include <opencv2/opencv.hpp>
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

void resizeImage(const cv::Mat& inputImage, cv::Mat& outputImage, int width, int height);
void convertToGrayscale(const cv::Mat& inputImage, cv::Mat& outputImage);
void drawRectangleInCenter(cv::Mat& image, int rectWidth, int rectHeight);

#endif 
