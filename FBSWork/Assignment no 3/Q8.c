#include<stdio.h>
void main() 
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int sum=0;
	int temp=n;
	while(n!=0) {
		int fact=1;
		int i=1;
		int r=n%10;
		while(i<=r) {
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(temp==sum)
		printf("The number is strong");
	else
		printf("The number is not strong");
}