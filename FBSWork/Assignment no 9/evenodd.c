#include<stdio.h>
void evenOrodd(int no[]);
void main()
{	
	int no[1];
	printf("Enter the no:");
	scanf("%d",&no);
	evenOrodd(no);
}
void evenOrodd(int no[]){
	if(no[0]%2==0)
		printf("The number is even");
	else
		printf("The number is odd");
}
