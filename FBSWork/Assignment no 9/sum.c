#include<stdio.h>
void isSum(int n[]);
void main()
{
	int n[1];
	printf("Enter the number:");
	scanf("%d",&n);
	isSum(n);
}
void isSum(int n[]){
	int f,l;
	l=n[0]%10;
	while(n[0]>=10)
	{
		n[0]=n[0]/10;
	}
	f=n[0];
	printf("The sum is:%d",f+l) ;
}