#include<opencv2/opencv.hpp>
//
//
//void main() {
//	cv::namedWindow("Gray", cv::WINDOW_AUTOSIZE);
//	cv::namedWindow("Canny", cv::WINDOW_AUTOSIZE);
//
//	cv::Mat Img;
//	Img = cv::imread("D:\\Project\\C++project\\�½��ļ���\\Learning-OpenCV-3_examples\\faces.png", 1);
//
//	cv::imshow("Input", Img);
//
//	cv::Mat Img_gray, Img_cny;
//	//ת�Ҷ�
//
//	cv::cvtColor(Img, Img_gray, cv::COLOR_BGR2GRAY);
//	cv::Canny(Img_gray, Img_cny, 10, 100, 3, true);
//
//	cv::imshow("Output", Img_cny);
//	cv::waitKey(0);
//}