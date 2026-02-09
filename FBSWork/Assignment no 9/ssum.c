#include<stdio.h>
void isSum(int start[],int end[]);
void main()
{
	int start[1],end[1];
	printf("Enter start and end: ");
	scanf("%d%d",&start,&end);
	isSum(start,end);
}
void isSum(int start[],int end[]){
	int sum=0;
	while(start[0]<=end[0])
	{
		sum=sum+start[0];
		(start[0])++;
	}
	printf("sum=%d",sum);
}