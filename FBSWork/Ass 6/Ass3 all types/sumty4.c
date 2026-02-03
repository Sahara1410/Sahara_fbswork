#include<stdio.h>
int isSum(int,int,int);
void main()
{
	int start,end;
	int sum=0;
	printf("Enter start and end: ");
	scanf("%d%d",&start,&end);
	int res=isSum(start,end,sum);
	printf("sum=%d",res);
}
int isSum(int start,int end,int sum){
	while(start<=end)
	{
		sum=sum+start;
		start++;
	}
	return sum;
}