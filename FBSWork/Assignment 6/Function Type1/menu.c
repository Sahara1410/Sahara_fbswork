#include<stdio.h>
void menu();
void main()
{
	menu();	
}
void menu(){
int a,b;
	char op;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("Enter operator +,-,*,/,%%:");
	scanf(" %c",&op);
	if( op=='+')
	{
		printf("The addition is:%d",a+b);
	}
	else if(op=='-')
	{
		printf("The subtraction is:%d",a-b);
	}
		else if(op=='*')
	{
		printf("The Multiplication is:%d",a*b);
	}
		else if(op=='/')
	{
		printf("The division is:%d",a/b);
	}
		else if(op=='%')
	{
		printf("The mod is:%d",a%b);
	}
	else
	{
		("Invalid Operator");
	}
}
	
