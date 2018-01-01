#include <opencv2/opencv.hpp> // 
#include <iostream>
#include "dbg.h"

int main(int argc, char **argv){

cv::Mat img = cv::imread(argv[1],-1);
check(img.empty(),"Failed to open image")

cv::namedWindow("Example1",0);
cv::imshow("Example1",img);
cv::waitKey(0);
cv::destroyWindow("Example1");


return 0;

error:    
  return -1;

}
