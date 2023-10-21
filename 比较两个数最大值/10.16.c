#include<stdio.h>
int main(){
	int x;
	int y;
	printf("请输入两个整数值\n");
	scanf("%d,%d",&x,&y);
	if(x > y){
		printf("最大值 = %d\n",x);		
	}
	else
	 {
	printf("最大值 = %d\n",y);
	}
	return 0;
}
