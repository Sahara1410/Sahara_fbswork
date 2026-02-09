#include<stdio.h>
void leap(int year[]);
void main()
{
	int year[1];
	printf("Enter year:");
	scanf("%d",&year);
	leap(year);
}
void leap(int year[]){
	if((year[0] % 400 ==0)||(year[0] % 4==0 && year[0] % 100 !=0))
	{
		printf("This year is leap year");
	}
	else
	{
		printf("This year is not leap year");	
	}
	
}