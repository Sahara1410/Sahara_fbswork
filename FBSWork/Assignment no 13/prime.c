#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n=10; 
	int* arr=(int*)malloc(n*sizeof(int));
	printf("Enter %d elements in array:\n",n);
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Prime numbers are:\n");
	for(int i=0;i<n;i++){
		int status=1;
		for(int j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			status=0;
			break;
		}
		if(status==1)
			printf("%d ",arr[i]);
	}
	free(arr);
	
}