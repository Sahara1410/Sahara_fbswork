#include<stdio.h>
void personAge(int arr[]);
void main()
{
	int arr[1]; 
	printf("Enter age:");
	scanf("%d",&arr[0]);
	personAge(arr);
	
}
void personAge(int arr[])	{
	if(arr[0]<12)
		printf("He is Child");
	else if(arr[0]>=12 && arr[0]<=19)
		printf("He is Teenager");
	else if(arr[0]>=20 && arr[0]<=59)
		printf("He is Adult");
	else if(arr[0]>=60 && arr[0]<=100)
		printf("He is Senior");
	else
		printf("Please enter valid age");
}