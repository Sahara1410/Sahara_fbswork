#include<stdio.h>
void armStrong(int*);
void main() {
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int temp=n;
	armStrong(&n);
}
void armStrong(int*n){
	int sum=0;
	int temp=*n;
	int r;
	while(*n!=0) {
		r=*n%10;
		sum=sum+r*r*r;
		*n=*n/10;
	}
	if(temp==sum) {
		printf("The number is Armstrong");
	} else
		printf("The number is not armstrong");
}
