#include<stdio.h>
void isDivisible(int no[]);
void main()
{
	int no[1];
	printf("Enter the Number:");
	scanf("%d",&no[0]);
	isDivisible(no);
	
}
void isDivisible(int no[]){
	if(no[0]%3==0 && no[0]%5!=0)
		printf("Number is divisible by 3 but not divisible by 5");
	else if(no[0]%5==0 && no[0]%3!=0)
		printf("Number is divisible by 5 but not divisible by 3");
	else if(no[0]%3==0 && no[0]%5==0)
		printf("Number is divisible by 3 and also divisible by 5");
	else
		printf("Number is not divided");
}