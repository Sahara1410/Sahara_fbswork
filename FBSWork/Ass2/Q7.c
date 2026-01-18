#include<stdio.h>
void main()
{
	int age;
	printf("Enter age:");
	scanf("%d",&age);
	if(age<12)
	{
		printf("He is Child",age);
	}
	else if(age>=12 && age<=19)
	{
		printf("He is Teenager",age);
	}
	else if(age>=20 && age<=59)
	{
		printf("He is Adult",age);
	}
	else if(age>=60)
	{
		printf("He is Senior",age);
	}
	else
	{
		printf("Please enter valid age",age);
	}
	
}