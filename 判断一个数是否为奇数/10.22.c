#include<stdio.h>
#include<windows.h>
  int main(){
	int a;
	printf("请输入一个整数以判断是否为奇数\n");
	scanf("%d",&a);
	if(a%2 == 1)
	{
	  printf("此整数为奇数\n");	
	}
	else
	{
	  printf("此整数不为奇数\n");	
	}
	    system("pause");
	       return 0;
	  
}
