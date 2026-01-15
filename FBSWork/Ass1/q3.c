#include<stdio.h>
void main()
{
	int year=2022;
	if((year % 400 ==0)||(year % 4==0 && year % 100 !=0))
	{
		printf("This year is leap year");
	}
	else
	{
		printf("This year is not leap year");	
	}
}