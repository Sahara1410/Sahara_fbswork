#include<stdio.h>
void isSum(int,int,int);
void main()
{
	int start,end;
	int sum=0;
	printf("Enter start and end: ");
	scanf("%d%d",&start,&end);
	isSum(start,end,sum);
}
void isSum(int start,int end,int sum){
	while(start<=end)
	{
		sum=sum+start;
		start++;
	}
	printf("sum=%d",sum);
}