#include<stdio.h>
void leap(int*);
void main()
{
	int year;
	printf("Enter year:");
	scanf("%d",&year);
	leap(&year);//year is a actual parameter
}
void leap(int* year){//year1 is a formal parameter is jagah hum year bhi le skte hai....
	if((*year % 400 ==0)||(*year % 4==0 && *year % 100 !=0))
	{
		printf("This year is leap year");
	}
	else
	{
		printf("This year is not leap year");	
	}
	
}