#include<stdio.h>
void main()
{
	int arr[6]={5,7,6,8,3,4};
	int sum=0;
	for(int i=0;i<6;i++){
		sum=sum+arr[i];
	}
		printf("Sum is:%d",sum);
}