#include <iostream>
#include<opencv2/opencv.hpp>

using namespace std;

void grayImage() {
cv::Mat image=cv::imread("img.jpg", cv::IMREAD_COLOR);
cv::Mat grayImageP;
cv::cvtColor(image, grayImageP, cv::COLOR_BGR2GRAY);

//cv::imshow("gray image", grayImage);
//cv::imshow("origin image", image);
cv::imwrite("gray.jpg", grayImageP);
cv::waitKey(0);
cv::destroyAllWindows();
cv::_OutputArray arr;
cv::findContours(grayImageP, arr, 0, 0);


}


int main() {
	

	grayImage();

	system("pause");

	return 0;
}