#include<stdio.h>
void divisible(int);
void main()
{
	int no;
	printf("Enter the Number:");
	scanf("%d",&no);
	divisible(no);
	
}
void divisible(int no){
	if(no%3==0 && no%5!=0)
		printf("Number is divisible by 3 but not divisible by 5",no);
	else if(no%5==0 && no%3!=0)
		printf("Number is divisible by 5 but not divisible by 3",no);
	else if(no%3==0 && no%5==0)
		printf("Number is divisible by 3 and also divisible by 5",no);
	else
		printf("Number is not divided");
}