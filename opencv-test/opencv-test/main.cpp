//#include "stdafx.h"
#include<opencv2/opencv.hpp>
#include<string>
#include<iostream>
using namespace cv;
using namespace std;
int main()
{
	Mat img = imread("C:\\Users\\Public\\Pictures\\Sample Pictures\\d.jpg", CV_LOAD_IMAGE_COLOR);
	if (img.empty()){cout << "erro"; return -1;}
	Mat gray_img;
	cvtColor(img, gray_img, CV_BGR2GRAY);
	imshow("²ÊÉ«", img);
	imshow("ºÚ°×", gray_img);
	waitKey();
	system("pause");
}

