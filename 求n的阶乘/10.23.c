#include<stdio.h>
#include<windows.h>
 int main()
 {
 	int x;
 	int i = 1;
 	int y = 1;
 	printf("���������׳˵�����\n");
 	 scanf("%d",&x);
     	while(i <= x)
     	{
		 	y = y*i;
		 	i = i + 1;
		 };
		 printf("���Ϊ%d\n",y);
     system("pause");
 	return 0;
 }
