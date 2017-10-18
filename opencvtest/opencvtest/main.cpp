#include<opencv2/opencv.hpp>
#include<highgui\highgui.hpp>
using namespace cv;
using namespace std;
int main()
{
	VideoCapture cap(0);
	Mat frame;
	while(1)
	{
		cap>>frame;
		imshow("videoTest",frame);
		char esc=(char)waitKey(33);
		if(27==esc)
			break;
	}
	return 0; 
}