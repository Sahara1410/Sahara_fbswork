#include<stdio.h>
void menu(char[],int[],int[]);
void main()
{
	int a[1],b[1];
	char op[1];
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("Enter operator +,-,*,/,%%:");
	scanf(" %c",&op);
	menu(op,a,b);
}
void menu(char op[],int a[],int b[]){
	if( op[0]=='+')
	{
		printf("The addition is:%d",a[0]+b[0]);
	}
	else if(op[0]=='-')
	{
		printf("The subtraction is:%d",a[0]-b[0]);
	}
		else if(op[0]=='*')
	{
		printf("The Multiplication is:%d",a[0]*b[0]);
	}
		else if(op[0]=='/')
	{
		printf("The division is:%d",a[0]/ b[0]);
	}
		else if(op[0]=='%')
	{
		printf("The mod is:%d",a[0]%b[0]);
	}
	else
	{
		("Invalid Operator");
	}
}
	
