#include<stdio.h>
int evenOrodd();
void main()
{
	evenOrodd()?printf("Even"):printf("Odd");
}
int evenOrodd(){
	int no;
	printf("Enter the no:");
	scanf("%d",&no);
	if(no%2==0)
		return 1;
	else
		return 0;
}
