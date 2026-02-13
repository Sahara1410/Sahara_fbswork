#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* arr=(int*)malloc(6*sizeof(int));
	printf("Enter 6 elements in array:\n");
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Alternate no is:");
	for(int i=0;i<6;i+=2)
		printf("\n%d",arr[i]);
	free(arr);
}