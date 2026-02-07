#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,4,5};
	int i,temp;
	for(i=0;i<5/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[5-1-i];
		arr[5-1-i]=temp;
	}
	printf("Reversed array is:\n");
	for(i=0;i<5;i++){
		printf("%d,",arr[i]);
	}
}