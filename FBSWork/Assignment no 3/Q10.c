#include<stdio.h>
void main()
{
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