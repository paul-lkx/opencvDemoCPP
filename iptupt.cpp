/*************************************************************************
	> File Name: iptupt.cpp
	> Author:shye 
	> Mail: 
	> Created Time: 2018年03月06日 星期二 14时40分32秒
 ************************************************************************/

#include<iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main( void )
{
//    Mat myMat = cv::imread("c2.jpg",CV_LOAD_IMAGE_GRAYSCALE);
//    std::cout << myMat << std::endl;

    Mat ge1=imread("../c2.jpg", 0);//载入灰度图
//    Mat image2=imread("c2.jpg", 199);//载入3通道的彩色图像
//    Mat logo=imread("c2.jpg");//载入3通道的彩色图像

    cv::namedWindow("chris",WINDOW_AUTOSIZE);
    cv::imshow("chris",ge1);

    waitKey();

    return 0;
}
