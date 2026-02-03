#include<stdio.h>
void isSum(int,int,int);
void main()
{
	int f,l,n;
	printf("Enter the number:");
	scanf("%d",&n);
	l=n%10;
	isSum(f,l,n);
}
void isSum(int f,int l,int n){
	while(n>=10)
	{
		n=n/10;
	}
	f=n;
	printf("The sum is:%d",f+l) ;
}