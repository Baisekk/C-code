#include<stdio.h>
 int main()
 {
 	int i=1;//��������
 	float s=0;//���֮ǰ����·��
 	float h = 100;
 	while(i<10)
 	{
	 	h = 1.0/2*h;
	 	s = s + h*2;
		i++;
	 }
	s = s + 100;
	printf("��ʮ�����ʱ��������s=%f\n",s);
	h = h*1.0/2;
	printf("��ʮ�η����ĸ߶�Ϊ%f\n",h);
 	return 0;
 }
