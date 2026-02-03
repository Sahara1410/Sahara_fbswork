#include<stdio.h>
int sum();
void main()
{
	printf("sum is:%d",sum());
}
int sum(){
	int start,end;
	int sum=0;
	printf("Enter start and end: ");
	scanf("%d%d",&start,&end);
	while(start<=end)
	{
		sum=sum+start;
		start++;
	}
	return sum;
}