#include<stdio.h>
void isSum(int*,int*);
void main()
{
	int start,end;
	printf("Enter start and end: ");
	scanf("%d%d",&start,&end);
	isSum(&start,&end);
}
void isSum(int*start,int*end){
	int sum=0;
	while(*start<=*end)
	{
		sum=sum+*start;
		(*start)++;
	}
	printf("sum=%d",sum);
}