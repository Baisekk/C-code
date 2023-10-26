#include<stdio.h>
 int main()
 {  int i = 1 ;
 	while(i <= 100)
 	{
 		int j = 2;
	 	for(j=2;j<=i;j++)
	 	{
		 	if(i % j == 0)
		 	break;
		 }
		if(j==i)
		printf("%d ",i);
	 	i += 1;
	 }
 	
 	return 0;
 }
