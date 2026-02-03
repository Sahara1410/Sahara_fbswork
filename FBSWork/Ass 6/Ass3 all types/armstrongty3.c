#include<stdio.h>
void armStrong(int,int,int,int);
void main() {
	int n,r,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	int temp=n;
	armStrong(n,r,sum,temp);
}
void armStrong(int n,int r,int sum,int temp){
	while(n!=0) {
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(temp==sum) {
		printf("The number is Armstrong");
	} else
		printf("The number is not armstrong");
}