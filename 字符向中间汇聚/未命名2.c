#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
 int main()
 {
   char arr1[] = "Hello world!!!";
   char arr2[] = "**************";
   int left = 0;
   int right;
 	right = strlen(arr1) - 1;
 	while(left <= right)
 	{
	   arr2[left] = arr1[left];
	   arr2[right] = arr1[right];
	   left += 1;
	   right -= 1;
	   printf("%s\n",arr2);
	   Sleep(1000);
	   system("cls");
	 }
	 printf("%s\n",arr2);
	  system("pause");
   	  return 0; 
 }
