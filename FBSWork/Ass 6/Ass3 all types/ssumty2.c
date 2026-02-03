#include<stdio.h>
int isSum();
void main()
{
	printf("Sum is %d",isSum());
}
int isSum(){
int f,l,n;
	printf("Enter the number:");
	scanf("%d",&n);
	l=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	f=n;
	return f+l ;
}