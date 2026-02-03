#include<stdio.h>
void evenOrodd(int);
void main()
{	
	int no;
	printf("Enter the no:");
	scanf("%d",&no);
	evenOrodd(no);
}
void evenOrodd(int no1){
	if(no1%2==0)
		printf("The number is even");
	else
		printf("The number is odd");
}
