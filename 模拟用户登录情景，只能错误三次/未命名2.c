#include<stdio.h>
#include<windows.h>
int main() {
	int mima = 12345678;
	int a ;
	int b ;
	int c ;
	printf("����������,��ֻ�����δ���Ļ���\n");
	scanf("%d", &a);
	if (a != mima)
	 {
	    printf("���������������������\n");
        scanf("%d",&b);
	         if(b != mima)
			       {
	 	     printf("���������������������\n");
	         scanf("%d",&c);
	  	          if(c != mima)
	  	          printf("����������������޷���������\n");
	  	          else if(c = mima)
	  	          printf("����������ȷ\n");
					}
	else if(b == mima)
    printf("����������ȷ\n");
	  }
	  else
	  printf("����������ȷ\n");
	system("pause");
	return 0;
}
