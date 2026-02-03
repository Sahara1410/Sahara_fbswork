#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);
void main()
{   
	char op;
	printf("Enter operater like +,-,*,/,%:");
	scanf("%c",&op);
	int no1,no2;
	printf("Enter the two numbers:");
	scanf("%d %d",&no1,&no2);
	int res=add(no1,no2);
	int res1=sub(no1,no2);
	int res2=mul(no1,no2);
	int res3=div(no1,no2);
	int res4=mod(no1,no2);
	if(op=='+')
		printf("Addition is:%d",res);
	else if(op=='-')
		printf("Subtraction is:%d",res1);
	if(op=='*')
		printf("Multiplication is:%d",res2);
	if(op=='/')
		printf("Division is:%d",res3);
	if(op=='%')
		printf("Mod is:%d",res4);
}
int add(int no1,int no2){
return no1+no2;
}
int sub(int no1,int no2){
return no1-no2;
}
int mul(int no1,int no2){
return no1*no2;
}
int div(int no1,int no2){
return no1/no2;
}
int mod(int no1,int no2){
return no1%no2;
}