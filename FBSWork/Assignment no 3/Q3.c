#include<stdio.h>
void main()
{
	int start,end;
	int sum=0;
	printf("Enter start and end: ");
	scanf("%d%d",&start,&end);
	while(start<=end)
	{
		sum=sum+start;
		start++;
	}
	printf("sum=%d",sum);
}