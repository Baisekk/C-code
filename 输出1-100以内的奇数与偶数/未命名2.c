#include<stdio.h>
#include<windows.h>
  int main()
  {
     int a  =  1;
     int b  =  1;
     printf("����Ϊ\n");
     while(a <=  100)
	 {
	   if(a%2  ==  1)
	   	  {
		printf("%d ",a);  	
			   }	
	 	a  =  a  +  1;
	 };
	 printf("\nż��Ϊ\n");
	    while(b  <=  100)
		{
		if(b%2 == 0)
		   {
		   	printf("%d ",b);
		   }
			b += 1;
		}
  	   return 0;
  }
