#include<stdio.h>
int facto(int,int,int);
void main()
{ 
	int i=1,fact=1;
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	int res=facto(fact,i,no);
	printf("Factorial is:%d",res);
}
int facto(int fact,int i,int no){
	for(i=1;i<=no;i++)
		fact=fact*i;
	return fact;
}