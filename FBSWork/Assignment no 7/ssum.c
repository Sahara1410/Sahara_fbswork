#include<stdio.h>
void isSum(int*);
void main()
{
	int l,n;
	printf("Enter the number:");
	scanf("%d",&n);
	isSum(&n);
}
void isSum(int*n){
	int f,l;
	l=*n%10;
	while(*n>=10)
	{
		*n=*n/10;
	}
	f=*n;
	printf("The sum is:%d",f+l) ;
}