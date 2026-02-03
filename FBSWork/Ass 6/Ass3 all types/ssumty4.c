#include<stdio.h>
int isSum(int,int,int);
void main()
{
	int f,l,n;
	printf("Enter the number:");
	scanf("%d",&n);
	l=n%10;
	printf("The Sum is:%d",isSum(f,l,n));
}
int isSum(int f,int l,int n){
	while(n>=10)
	{
		n=n/10;
	}
	f=n;
	return f+l ;
}