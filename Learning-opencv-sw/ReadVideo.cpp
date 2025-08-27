
#include<opencv2/opencv.hpp>

//#include<opencv2/highgui/highgui.hpp>

int main() {
	cv::namedWindow("Example-2", cv::WINDOW_AUTOSIZE);
	cv::VideoCapture cap;
	cap.open("D:\\Project\\C++project\\新建文件夹\\Learning-OpenCV-3_examples\\test.avi");
	cv::Mat frame;
	for (;;) {
		cap >> frame;
		if (frame.empty())
			return -1;
		cv::imshow("Example-2", frame);
		if (cv::waitKey(66) > 0)
			break;
		return 0;
	}
}