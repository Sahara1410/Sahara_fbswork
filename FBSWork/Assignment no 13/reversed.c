#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n=10;
	int* arr=(int*)malloc(n*sizeof(int));
	printf("Enter %d elements in array:",n);
	int i,temp;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[10-1-i];
		arr[10-1-i]=temp;
	}
	printf("Reversed array is:\n");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	free(arr);
}