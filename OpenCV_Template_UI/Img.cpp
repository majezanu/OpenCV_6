#include "Img.h"
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

using namespace System;


Img::Img(cv::String path)
{
	mPath = path;
	mMat = imread(mPath);
}

Img::Img()
{

}

Img::~Img()
{
}

void Img::setMat(Mat mat)
{
	mMat = mat;
}
Mat Img::getMat()
{
	return mMat;
}




Mat Img::Image2Gamma( int C, int value_gamma)
{
	mMat.convertTo(mMat, CV_32F);
	pow(mMat, value_gamma / 10.0, mMat);
	mMat = C * mMat;
	normalize( mMat, mMat, 0, 255, NORM_MINMAX);
	convertScaleAbs(mMat, mMat);
	return mMat;
}

Mat Img::Image2Negative() 
{
	Mat gray_image;
	cvtColor(mMat, gray_image, cv::COLOR_RGB2GRAY);
	gray_image = 255 - gray_image;
	cvtColor(gray_image, gray_image, cv::COLOR_GRAY2BGR);
	return gray_image;
}
Mat Img::Image2Log(int C)
{

	mMat.convertTo(mMat, CV_32F);
	log(mMat + 1, mMat);
	mMat = C * mMat;
	convertScaleAbs(mMat, mMat);
	normalize(mMat, mMat, 0, 255, NORM_MINMAX);
	return mMat;
}

Mat Img::contrastStretching(int r1, int s1, int r2, int s2)
{
	Mat clone = mMat.clone();
	//cvtColor(clone, gray_image, COLOR_BGR2GRAY);
	for (int y = 0; y <mMat.rows; y++) {
		for (int x = 0; x < mMat.cols; x++) {
			for (int c = 0; c < 3; c++) {
				int output = Img::computeContrast(mMat.at<Vec3b>(y, x)[c], r1, s1, r2, s2);
				clone.at<Vec3b>(y, x)[c] = saturate_cast<uchar>(output);
			}
		}
	}
	return clone;
}

Mat Img::threshold( int k)
{
	Mat clone = mMat.clone();
	//cvtColor(clone, gray_image, COLOR_BGR2GRAY);

	for (int y = 0; y < mMat.rows; y++) {
		for (int x = 0; x < mMat.cols; x++) {
			for (int c = 0; c < 3; c++) {
				if (clone.at<Vec3b>(y, x)[c] <= k)
				{
					clone.at<Vec3b>(y, x)[c] =0;
				}
				else {
					clone.at<Vec3b>(y, x)[c] = 255;
				}
			}
		}
	}
	return clone;
}

Mat Img::cvHistogramEqu()
{
	Mat clone = mMat.clone();
	cvtColor(clone, clone, COLOR_BGR2GRAY);
	equalizeHist(clone, clone);
	cvtColor(clone, clone, COLOR_GRAY2BGR);
	return clone;
}

Mat Img::histogramProcessingManual()
{
	Mat origianl_image = mMat.clone();
	Mat src, src_gray, dst;
	std::vector<float> histogram(256, 0.0000);
	src = origianl_image.clone();


	cvtColor(src, src_gray, COLOR_BGR2GRAY);
	src_gray.convertTo(dst, CV_32F);

	for (int i = 0; i < src_gray.rows; i++) {
		for (int j = 0; j < src_gray.cols; j++) {
			histogram.at(src_gray.at<uchar>(i, j)) += 1;
		}
	}

	for (int i = 1; i < 256; i++) {
		histogram.at(i) = histogram.at(i) + histogram.at(i - 1);
		histogram.at(i - 1) /= dst.total();
		if (i == 255)
		{
			histogram.at(i) /= dst.total();
		}
	}



	for (int i = 0; i < src_gray.rows; i++) {
		for (int j = 0; j < src_gray.cols; j++) {

			dst.at<float>(i, j) = histogram.at(src_gray.at<uchar>(i, j)) * dst.at<float>(i, j);

		}
	}
	normalize(dst, dst, 0, 255, NORM_MINMAX);		//la normalizamos a 256 niveles
	//convertScaleAbs(dst, dst);
	dst.convertTo(dst, CV_8UC1);					//Regresamos la imagen a 8-bit
	cvtColor(dst, dst, cv::COLOR_GRAY2BGR);
	return dst;
}

Mat Img::cvEqualizeLocalHist(int nb)
{
	Mat clone = mMat.clone();
	cvtColor(clone, clone, COLOR_BGR2GRAY);
	Mat destiny = Mat::zeros(clone.size(), clone.type());
	Mat border;
	copyMakeBorder(clone, border, nb, nb, nb, nb, BORDER_CONSTANT);

	Mat kernel = Mat::zeros(2 * nb + 1, 2 * nb + 1, clone.type());
	for (int i = nb; i < clone.rows + nb; i++)
	{
		for (int j = nb; j < clone.cols + nb; j++)
		{
			for (int k = nb * -1; k <= nb; k++)
			{
				for (int n = nb * -1; n <= nb; n++)
				{
					kernel.at<uchar>(k + nb, n + nb) = border.at<uchar>(i + k, j + n);
				}
			}
			equalizeHist(kernel, kernel);
			destiny.at<uchar>(i - nb, j - nb) = kernel.at<uchar>(nb, nb);

		}
	}
	cvtColor(destiny, destiny, COLOR_GRAY2BGR);
	return destiny;



}

Mat Img::LocalHistorgramStatistics(int nb, float k0, float k1, float k2, float E) {
	cvtColor(mMat, mMat, COLOR_BGR2GRAY);
	Mat _dst = Mat::zeros(mMat.size(),mMat.type());

	float meanG = calcMean(mMat); 
	double stddG = sqrt(calcVar(mMat, meanG)); 

	Mat src_border;
	copyMakeBorder(mMat, src_border, nb, nb, nb, nb, BORDER_CONSTANT); 

	Mat kernel = Mat::zeros(2 * nb + 1, 2 * nb + 1, mMat.type()); 

	for (int i = nb; i < mMat.rows + nb; i++) {
		for (int j = nb; j < mMat.cols + nb; j++) {

			for (int k = nb * -1; k <= nb; k++) {
				for (int n = nb * -1; n <= nb; n++) {
					kernel.at<uchar>(k + nb, n + nb) = src_border.at<uchar>(i + k, j + n);
				}
			}

			float meanS = calcMean(kernel);
			float stddS = sqrt(calcVar(kernel, meanS));

			if ((meanS <= k0 * meanG) && (k1*stddG <= stddS) && (stddS <= k2 * stddG)) {
				_dst.at<uchar>(i - nb, j - nb) = kernel.at<uchar>(nb, nb)*E;
			}
			else {
				_dst.at<uchar>(i - nb, j - nb) = kernel.at<uchar>(nb, nb);
			}

		}
	}
	cvtColor(_dst, _dst, COLOR_GRAY2BGR);
	return _dst;
}

Mat Img::avgFilter(int nb) 
{
	cvtColor(mMat, mMat, COLOR_BGR2GRAY);
	Mat _dst = Mat::zeros(mMat.size(), mMat.type());	
	int _kern_size = 1 + 2 * nb;	
	Mat _kern = Mat::ones(_kern_size, _kern_size, CV_32F) / (float)(_kern_size * _kern_size); 
	Point _anchor = Point(nb, nb); 
	filter2D(mMat, _dst, -1, _kern, _anchor, 0, BORDER_DEFAULT); 

	cvtColor(_dst, _dst, COLOR_GRAY2BGR);
	return _dst;
}

Mat Img::medFilter(int nb) 
{

	cvtColor(mMat, mMat, COLOR_BGR2GRAY);
	
	Mat _dst = Mat::zeros(mMat.size(), mMat.type());	
	medianBlur(mMat, _dst, 2 * nb + 1);
	
	cvtColor(_dst, _dst, COLOR_GRAY2BGR);
	return _dst;
}

Mat Img::lapFilter(Mat _kern) {
	cvtColor(mMat, mMat, COLOR_BGR2GRAY);
	mMat.convertTo(mMat, CV_32F);
	Mat _dst = Mat::zeros(mMat.size(), mMat.type());	
	Point _anchor = Point(1, 1);
	filter2D(mMat, _dst, CV_32F, _kern, _anchor, 0, BORDER_DEFAULT); 
	
	return _dst;
}

Mat Img::lapFilterSCaled()
{
	double min, max;
	Mat dst;
	minMaxLoc(mMat, &min, &max);
	mMat.copyTo(dst);
	dst += min;
	normalize(dst, dst, 0, 255, NORM_MINMAX);
	dst.convertTo(dst, CV_8U);
	cvtColor(dst, dst, COLOR_GRAY2BGR);
	return dst;

}

Mat Img::sumLap(Mat lap)
{
	Mat dst;
	cvtColor(mMat, mMat, COLOR_BGR2GRAY);
	mMat.convertTo(mMat, CV_32F);
	dst = mMat - lap;
	dst.convertTo(dst, CV_8U);
	cvtColor(dst, dst, COLOR_GRAY2BGR);
	return dst;

}

Mat Img::fuzzyFilter(int _vd, int _vg, int _vb) { 
	cvtColor(mMat, mMat, COLOR_BGR2GRAY);
	Mat _src = mMat;
	Mat _dst = Mat::zeros(_src.size(), _src.type());
	float udark, ugray, ubright;
	for (int i = 0; i < _src.rows; i++) {
		for (int j = 0; j < _src.cols; j++) {
			udark = trapezoidalMembership(_src.at<uchar>(i, j), 0, 80, 0, 47);
			ugray = triangularMembership(_src.at<uchar>(i, j), 127, 47, 47);
			ubright = trapezoidalMembership(_src.at<uchar>(i, j), 174, 255, 47, 0);
			_dst.at<uchar>(i, j) = (udark*_vd + ugray * _vg + ubright * _vb) / (udark + ugray + ubright);
		}
	}
	
	return _dst;
}

int Img::computeContrast(int point, int r1, int s1, int r2, int s2)
{
	int x = point;
	float result;
	if (0 <= x && x <= r1) {
		result = (x*s1) / (r1 + 1);
	}
	else if (r1 < x && x <= r2) {
		result = (x*(s2 - s1)) / (r2 - r1 + 1);
	}
	else if (r2 < x && x <= 255) {
		result = (x * (256 - s2) / (256 - r2)) + s2;
	}
	return (int)result;
}
float Img::calcMean(Mat _src) { 
	return (float)sum(_src)[0] / _src.total();
}

double Img::calcVar(Mat _src) { 
	float mean = calcMean(_src);
	return calcVar(_src, mean);
}

double Img::calcVar(Mat _src, float _mean) {
	Mat temp1 = _src;
	temp1.convertTo(temp1, CV_32F);
	pow(temp1 - _mean, 2, temp1);
	return (double)sum(temp1)[0] / temp1.total();
}

float Img::triangularMembership(float z, float a, float b, float c) 
{ 
	if (z >= (a - b) && z < a) {
		return (1 - (a - z) / b);
	}
	else if (z >= a && z <= a + c) {
		return (1 - (z - a) / c);
	}
	else {
		return 0;
	}
}

float Img::trapezoidalMembership(float z, float a, float b, float c, float d) { 
	if (z >= (a - c) && z < a) {
		return (1 - (a - z) / c);
	}
	else if (z >= a && z < b) {
		return 1;
	}
	else if (z >= b && z <= (b + d)) {
		return (1 - (z - b) / d);
	}
	else {
		return 0;
	}
}

Void Img::DrawCvImageColor(System::Windows::Forms::PictureBox^ localBox)
{
	mMat.convertTo(mMat, CV_8U);
	cvtColor(mMat, mMat, CV_BGRA2RGBA);
	System::Drawing::Graphics^ graphics = localBox->CreateGraphics();
	System::IntPtr ptr(mMat.ptr());
	System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(mMat.cols,
		mMat.rows, mMat.step, System::Drawing::Imaging::PixelFormat::Format32bppArgb, ptr);
	System::Drawing::RectangleF rect(0, 0, localBox->Width, localBox->Height);
	graphics->DrawImage(b, rect);
}

Void Img::Show(cv::String name)
{
	imshow(name, mMat);
}