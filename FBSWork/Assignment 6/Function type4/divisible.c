#include<stdio.h>
int divisible(int);
void main()
{
	int no;
	printf("Enter the Number:");
	scanf("%d",&no);
	int res=divisible(no);
	if(res==1)
	   printf("Number is divisible by 3 but not divisible by 5",no);
	else if(res==2)
		printf("Number is divisible by 5 but not divisible by 3",no);
	else if(res==3)
		printf("Number is divisible by 5 and also divisible by 3",no);
	else
		printf("Number is not divided",no);	
}
int divisible(int no){
	if(no%3==0 && no%5!=0)
		return 1;
	else if(no%5==0 && no%3!=0)
		return 2;
	else if(no%3==0 && no%5==0)
		return 3;
	else
		return 0;
}