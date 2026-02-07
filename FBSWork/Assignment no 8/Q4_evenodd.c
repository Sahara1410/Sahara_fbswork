#include<stdio.h>
void main()
{
	int arr[6]={5,7,6,8,3,4};
	int i;
	printf("The even number is:",arr[i]);
	for( i=0;i<6;i++){
		if(arr[i]%2==0)
			printf("\n%d",arr[i]);
		}
	printf("\nThe odd number is:",arr[i]);
	for(int j=0;j<6;j++)
		if(arr[j]%2!=0)
			printf("\n%d",arr[j]);
	
		
}