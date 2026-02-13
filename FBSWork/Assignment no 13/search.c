#include<stdio.h>
#include<stdlib.h>
void main()
{
	int size=10;
	int* arr=(int*)malloc(size* sizeof(int));
	int ele,i,flag=0;
	printf("Enter 10 integer in array:");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to search:");
	scanf("%d",&ele);
	for(int i=0;i<10;i++){
	if(arr[i]==ele){
		printf("Element Found at index %d",i);
			flag=1;
			break;
		}
}
if(flag==0)
	printf("Element not found");
	free(arr);
}


