#include<stdio.h>
void main()
{
	double bs=7000;
	double da,ta,hra,ts;
	if(bs<5000)
	{
		da=bs*0.10;
		ta=bs*0.15;
		hra=bs*0.20;
	}
	else
	{
		da=bs*0.15;
		ta=bs*0.25;
		hra=bs*0.30;
	}
	ts=da+ta+hra+bs;
	printf("Total Salary is:%lf,%lf,%lf",da,ta,hra);
	
}