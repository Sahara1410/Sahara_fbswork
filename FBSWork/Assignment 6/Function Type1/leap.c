#include<stdio.h>
void leap();
void main()
{
	leap();
}
void leap(){
int year;
printf("Enter year:");
scanf("%d",&year);
	if((year % 400 ==0)||(year % 4==0 && year % 100 !=0))
	{
		printf("This year is leap year");
	}
	else
	{
		printf("This year is not leap year");	
	}
	
}