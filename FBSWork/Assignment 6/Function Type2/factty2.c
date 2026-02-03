#include<stdio.h>
int facto();
void main()
{
	printf("Factorial is:%d",facto());
}
int facto(){
int i=1,fact=1;
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	while(i<=no)
	{
		fact=fact*i;
		i++;
	}
	return fact;
}