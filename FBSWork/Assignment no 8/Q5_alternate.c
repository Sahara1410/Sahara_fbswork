#include<stdio.h>
void main()
{
	int arr[6]={5,7,6,8,3,4};
	printf("Alternate no is:");
	for(int i=0;i<6;i+=2)
		printf("\n%d",arr[i]);
}