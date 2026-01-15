#include<stdio.h>
void main()
{
	int hour=1;
	int min=13;
	int sec=15;
	hour=hour*60*60;
	min=min*60;
	printf("min %d",min);
	printf(" time= %d seconds",hour+min+sec);
	
}