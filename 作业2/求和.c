#include<stdio.h>
#include<windows.h>
 int main()
 {
 	int sum = 0;
 	int i = 0;
 	int m = 0;
 	int s = 0;
 	printf("ÊäÈësµÄÖµ\n");
 	scanf("%d",&s);
 	for(i=1;sum<s;i++)
 		{
		 	m = m + i;
			sum = m;
			if(sum>=s)
			{
			  sum = sum - i;
			  break;
			}	
		 }
	printf("sum=%d\n",sum); 	
 	system("pause");
	return 0;
 }
