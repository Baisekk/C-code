#include<stdio.h>
#include<windows.h>
 int main()
 {
 	int x;
 	int i = 1;
 	int z = 0;
 	int y = 1;
	printf("������������ǰn��Ľ׳�֮��\n");
	scanf("%d",&x);
     	while(i <= x)
     	{
		 	y = y*i;
		 	z = z + y;
		 	i = i + 1;
		 };
		 printf("���Ϊ%d\n",z);
		system("pause");
 	return 0;
 }
