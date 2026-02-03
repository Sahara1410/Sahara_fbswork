#include<stdio.h>
int armStrong();
void main() {
	armStrong()?printf("The number is Armstrong"):printf("The number is not Armstrong");
	
}
int armStrong(){
int n,r,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	int temp=n;
	while(n!=0) {
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(temp==sum) 
		return 1;
	 else
		return 0;
}