#include<stdio.h>
int add();
int sub();
int mul();
int div();
int mod();
void main()
{   
	char op;
	printf("Enter operater like +,-,*,/,%:");
	scanf("%c",&op);
	if(op=='+')
		printf("Addition is:%d",add());
	if(op=='-')
		printf("Subtraction is:%d",sub());
	if(op=='*')
		printf("Multiplication is:%d",mul());
	if(op=='/')
		printf("Division is:%d",div());
	if(op=='%')
		printf("Mod is:%d",mod());
}
int add(){
int no1,no2;
printf("Enter the two numbers:");
scanf("%d %d",&no1,&no2);
return no1+no2;
}
int sub(){
int no1,no2;
printf("Enter the two numbers:");
scanf("%d %d",&no1,&no2);
return no1-no2;
}
int mul(){
int no1,no2;
printf("Enter the two numbers:");
scanf("%d %d",&no1,&no2);
return no1*no2;
}
int div(){
int no1,no2;
printf("Enter the two numbers:");
scanf("%d %d",&no1,&no2);
return no1/no2;
}
int mod(){
int no1,no2;
printf("Enter the two numbers:");
scanf("%d %d",&no1,&no2);
return no1%no2;
}