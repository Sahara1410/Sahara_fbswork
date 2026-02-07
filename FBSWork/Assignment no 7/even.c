#include<stdio.h>
void evenOrodd(int*);
void main()
{	
	int no;
	printf("Enter the no:");
	scanf("%d",&no);
	evenOrodd(&no);
}
void evenOrodd(int*no){
	if(*no%2==0)
		printf("The number is even");
	else
		printf("The number is odd");
}
