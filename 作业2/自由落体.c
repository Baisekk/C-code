#include<stdio.h>
 int main()
 {
 	int i=1;//反弹次数
 	float s=0;//落地之前的总路程
 	float h = 100;
 	while(i<10)
 	{
	 	h = 1.0/2*h;
	 	s = s + h*2;
		i++;
	 }
	s = s + 100;
	printf("第十次落地时，共经过s=%f\n",s);
	h = h*1.0/2;
	printf("第十次反弹的高度为%f\n",h);
 	return 0;
 }
