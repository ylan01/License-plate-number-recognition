// 车牌识别.cpp: 定义控制台应用程序的入口点。
//

#include "cph.h"

int main()
{
	LPR lpr;//也可以LPR lpr(path);
	String path = "D:\\TuXiang\\车牌号识别\\hjh1\\4.bmp";//图片路径
	lpr.load(path);//载入图片
	lpr.showSrc();//显示原图
	lpr.processing();//识别车牌
	waitKey(0);
	return 0;
}

