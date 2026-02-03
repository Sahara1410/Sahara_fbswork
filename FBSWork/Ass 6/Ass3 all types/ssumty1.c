#include<stdio.h>
void isSum();
void main()
{
	isSum();
}
void isSum(){
int f,l,n;
	printf("Enter the number:");
	scanf("%d",&n);
	l=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	f=n;
	printf("Sum is %d",f+l);
}