#include "SIFT.h"
#include "SIFT.cpp"
#include "function.h"
#include "function.cpp"
using namespace cv;
using std::vector;

int main(int argc,char* argv[])
{
	//TestAngle();
	const char *filename = "G:\\img1_500.jpg";
	Mat src = imread(filename);
	Mat descriptors1,descriptors2;
	vector<KeyPoint> keypoints1,keypoints2;
	xsift::Xsift(src,keypoints1,descriptors1);
	xsift::siftCV(src,noArray(),keypoints2,descriptors2,0);
	CompareKeypoints(keypoints1,keypoints2);
	if(CompareDescriptors(descriptors1,descriptors2)) std::cout << "yes" << std:: endl;
	return 0;
}
