#include<stdio.h>
#include<windows.h>
int main() {
	int mima = 12345678;
	int a ;
	int b ;
	int c ;
	printf("请输入密码,你只有三次错误的机会\n");
	scanf("%d", &a);
	if (a != mima)
	 {
	    printf("密码输入错误，请重新输入\n");
        scanf("%d",&b);
	         if(b != mima)
			       {
	 	     printf("密码输入错误，请重新输入\n");
	         scanf("%d",&c);
	  	          if(c != mima)
	  	          printf("你已三次输入错误，无法继续输入\n");
	  	          else if(c = mima)
	  	          printf("密码输入正确\n");
					}
	else if(b == mima)
    printf("密码输入正确\n");
	  }
	  else
	  printf("密码输入正确\n");
	system("pause");
	return 0;
}
