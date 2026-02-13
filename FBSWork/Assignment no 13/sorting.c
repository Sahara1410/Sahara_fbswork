#include<stdio.h>
#include<stdlib.h>
void main()
{
	int size=10;
	int* arr=(int*)malloc(size*sizeof(int));
	printf("Enter 10 integer in array:\n");
	int i,j,temp;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++){
			if(arr[i]>arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
	}
	printf("Sorted array is:\n");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	free(arr);
}