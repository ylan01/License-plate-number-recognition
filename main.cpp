// ����ʶ��.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "cph.h"

int main()
{
	LPR lpr;//Ҳ����LPR lpr(path);
	String path = "D:\\TuXiang\\���ƺ�ʶ��\\hjh1\\4.bmp";//ͼƬ·��
	lpr.load(path);//����ͼƬ
	lpr.showSrc();//��ʾԭͼ
	lpr.processing();//ʶ����
	waitKey(0);
	return 0;
}

