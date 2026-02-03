#include<stdio.h>
int leap();
void main()
{
	leap()?printf("This year is leap year"):printf("This year is not leap year");
}
int leap(){
int year;
printf("Enter year:");
scanf("%d",&year);
	if((year % 400 ==0)||(year % 4==0 && year % 100 !=0))
		return 1;
	
	else
		return 0;
}