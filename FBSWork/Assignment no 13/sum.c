#include<stdio.h>
#include<stdlib.h>
void main()
{
	
	int sum=0;
	int* arr=(int*)malloc(6*sizeof(int*));
	printf("Enter 6 elements in array:\n");
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<6;i++){
		sum=sum+arr[i];
	}
		printf("Sum is:%d",sum);
		free(arr);
}