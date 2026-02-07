#include<stdio.h>
void main()
{
	int arr[10]={23,34,12,56,7,89,45,32,45,76};
	int i,min,max;
	max=arr[0];
	min=arr[0];
	printf("The elements are:",arr[i]);
	for(i=0;i<10;i++){
		printf("\n%d",arr[i]);
	} for( i=0;i<=10;i++)
	{	 
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
		printf("\nThe maximum element is:%d",max);
		printf("\nThe Minimum element is:%d",min);
}
