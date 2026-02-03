#include<stdio.h>
void leap(int);
void main()
{
	int year;
	printf("Enter year:");
	scanf("%d",&year);
	leap(year);//year is a actual parameter
}
void leap(int year1){//year1 is a formal parameter is jagah hum year bhi le skte hai....
	if((year1 % 400 ==0)||(year1 % 4==0 && year1 % 100 !=0))
	{
		printf("This year is leap year");
	}
	else
	{
		printf("This year is not leap year");	
	}
	
}