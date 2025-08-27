#include<opencv2/opencv.hpp>


void main() {
	cv::namedWindow("Input", cv::WINDOW_AUTOSIZE);
	cv::namedWindow("Output", cv::WINDOW_AUTOSIZE);
	cv::namedWindow("Output1", cv::WINDOW_AUTOSIZE);
	cv::Mat Img;
	Img = cv::imread("D:\\Project\\C++project\\新建文件夹\\Learning-OpenCV-3_examples\\faces.png", 1);

	cv::imshow("Input", Img);

	cv::Mat Out;
	cv::GaussianBlur(Img, Out, cv::Size(5, 5), 3, 3);
	cv::imshow("Output1", Out);
	cv::GaussianBlur(Out, Out, cv::Size(5, 5), 3, 3);
	cv::imshow("Output", Out);
	cv::waitKey(0);


}

