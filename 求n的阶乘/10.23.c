#include<stdio.h>
#include<windows.h>
 int main()
 {
 	int x;
 	int i = 1;
 	int y = 1;
 	printf("请输入计算阶乘的数字\n");
 	 scanf("%d",&x);
     	while(i <= x)
     	{
		 	y = y*i;
		 	i = i + 1;
		 };
		 printf("结果为%d\n",y);
     system("pause");
 	return 0;
 }
