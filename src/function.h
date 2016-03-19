#ifndef Function_H
#define Function_H
#include <opencv2/opencv.hpp>
#include <vector>

void showPyr(const std::vector<cv::Mat> pyr,int nOctaves,int nOctaveLayers=3+3);

void writePyr(const std::vector<cv::Mat> pyr,int nOctaves,int nOctaveLayers,
	const char *dir,bool isStretch);

void writePyrValue(const std::vector<cv::Mat> pyr,int nOctaves,int nOctaveLayers,
	const char *dir);

//��Բ
void DrawCirlcle(cv::Mat& image,const std::vector<cv::KeyPoint>& keypoints,
	const cv::Scalar& color=cv::Scalar::all(-1));

//������ʮ��
void DrawCross(cv::Mat& image,const std::vector<cv::KeyPoint>& keypoints,
	const cv::Scalar& color=cv::Scalar::all(-1));

//���ԽǶȼ���
void TestAngle();

//�Ƚ����������㼯�Ƿ���ȫ���
void CompareKeypoints(const std::vector<cv::KeyPoint> kepoints1,const std::vector<cv::KeyPoint> kepoints2);

//�Ƚ����������������Ƿ���ȫ���
bool CompareDescriptors(const cv::Mat descr1,const cv::Mat descr2);

#endif