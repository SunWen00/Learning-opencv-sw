//Example 2-1. A simple OpenCV program that loads an image from disk and displays it
//on the screen
#include <opencv2/opencv.hpp>

//void help(char** argv) {
//	std::cout << "A simple OpenCV program that loads and displays an image from disk\n"
//		<< argv[0] << "<D:\\Project\\C++project\\新建文件夹\\Learning-OpenCV-3_examples\\faces.png>\n"
//		<< std::endl;
//}

void help(char** argv) {
	
	std::cout << "\n"
		<< "A simple OpenCV program that loads and displays an image from disk\n"
		<< argv[0] << " <filapath/name>\n"
		<< "For example:\n"
		<< argv[0] << " ../fruits.jpg\n"
		<< std::endl;
}

int main(int argc, char** argv) {

	if (argc != 2) {
		help(argv);
		return 0;
	}


	cv::Mat img = cv::imread(argv[1], -1);

	if (img.empty()) 
		return -1;

	//cv::namedWindow("Example 2-1", cv::WINDOW_AUTOSIZE);
	//cv::imshow("Example 2-1", img);
	//cv::waitKey(0);
	//cv::destroyWindow("Example 2-1");

	cv::namedWindow("MyFirstImage", cv::WINDOW_AUTOSIZE);
	cv::imshow("MyFirstImage",img);
	cv::waitKey(0);

	return 0;
}
