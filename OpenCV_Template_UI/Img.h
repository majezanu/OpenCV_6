#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/cvstd.hpp>
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <opencv/cv.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>


using namespace cv;
using namespace System;

class CV_EXPORTS Img : Mat
{
public:
	
	Img(cv::String path);
	Img();
	virtual ~Img();
	
	void setMat(Mat mat);
	Mat getMat();
	
	
	
	Mat Image2Gamma(int C, int value_gamma);
	Mat Image2Negative(); 
	Mat Image2Log(int C);
	Mat contrastStretching(int r1, int s1, int r2, int s2);
	Mat threshold(int k);
	Mat cvHistogramEqu();
	Mat histogramProcessingManual();
	Mat cvEqualizeLocalHist(int nb);
	Mat LocalHistorgramStatistics(int nb, float k0, float k1, float k2, float E);
	Mat avgFilter(int nb);
	Mat medFilter(int nb);
	Mat lapFilter(Mat _kern);
	Mat lapFilterSCaled();
	Mat sumLap(Mat lap);
	Mat fuzzyFilter(int _vd, int _vg, int _vb);
	
	int computeContrast(int point, int r1, int s1, int r2, int s2);
	float calcMean(Mat _src);
	double calcVar(Mat _src);
	double calcVar(Mat _src, float _mean);
	float triangularMembership(float z, float a, float b, float c);
	float trapezoidalMembership(float z, float a, float b, float c, float d);
	Void DrawCvImageColor(System::Windows::Forms::PictureBox^ localBox);
	void Show(cv::String name);


private: 
	Mat mMat;
	cv::String mPath;
	
};