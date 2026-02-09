#include<stdio.h>
void armStrong(int arr[]);
void main() {
	int arr[1];
	printf("Enter the number:");
	scanf("%d",&arr[0]);
	int temp=arr[0];
	armStrong(arr);
}
void armStrong(int arr[]){
	int sum=0;
	int temp=arr[0];
	int r;
	while(arr[0]!=0) {
		r=arr[0]%10;
		sum=sum+r*r*r;
		arr[0]=arr[0]/10;
	}
	if(temp==sum) {
		printf("The number is Armstrong");
	} else
		printf("The number is not armstrong");
}
