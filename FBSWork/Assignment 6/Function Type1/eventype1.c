#include<stdio.h>
void evenOrodd();
void main()
{
	evenOrodd();
}
void evenOrodd(){
	int no;
	printf("Enter the no:");
	scanf("%d",&no);
	if(no%2==0)
		printf("The number is even");
	else
		printf("The number is odd");
}
