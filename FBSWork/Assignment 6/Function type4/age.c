#include<stdio.h>
int personAge(int);
void main()
{
	int age;
	printf("Enter age:");
	scanf("%d",&age);
	int res=personAge(age);
	if(res==1)
		printf("He is Child",age);
	else if(res==2)
	    printf("He is Teenager",age);
	else if(res==3)
		printf("He is Adult",age);
	else if(res==4)
		printf("He is Senior",age);
	else
		printf("Please enter valid age",age);	
}
int personAge(int age )	{
	if(age<12)
		return 1;
	else if(age>=12 && age<=19)
		return 2;
	else if(age>=20 && age<=59)
		return 3;
	else if(age>=60 && age<=100)
		return 4;
	else
		return 0;
}