#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* arr=(int*)malloc(6*sizeof(int));
	int i;
	printf("Enter 6 elements in array:\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("The even number is:",arr[i]);
	for( i=0;i<6;i++){
		if(arr[i]%2==0)
			printf("\n%d",arr[i]);
		}
	printf("\nThe odd number is:",arr[i]);
	for(int j=0;j<6;j++)
		if(arr[j]%2!=0)
			printf("\n%d",arr[j]);
	free(arr);
		
}