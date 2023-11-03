#include<stdio.h>
 int main()
 {
 	float sum,x;
 	int i=1,a,b;
 	a = 2;
 	b = 0;
 	while(i<20)
 	{
	b = a;
	a = a + i;
	x = (float) a/b;
	sum = sum + x;
	 	i++;
	 }
 	sum = sum + 2;
 	printf("sum=%f\n",sum);
 	return 0;
 }
