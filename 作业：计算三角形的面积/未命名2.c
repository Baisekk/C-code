#include<stdio.h>
#include<math.h>
#include<windows.h>
  int main()
  {
  	int a,b,c;
  	double s;
    double p;
  	printf("请输入三角形的三边\n");
  	scanf("%d,%d,%d",&a,&b,&c);
  	if(a + b > c && a - b < c && a - c < b && a + c > b && b + c > a && b - c < a)
  	{
  	p = (double) (a + b + c)/2;
  	s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("此三角形存在，且面积s = %lf\n",s);	  
	}
  	else 
  	printf("此三角形不存在\n");
     system("pause");
	  return 0; 	
  }
