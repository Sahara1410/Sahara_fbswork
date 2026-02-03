#include<stdio.h>
int evenOrodd(int);
void main()
{
	int no;
	printf("Enter the no:");
	scanf("%d",&no);
	int res=evenOrodd(no);
	if(res==1)
		printf("%d is even",no);
	else
		printf("%d is odd",no);
}
int evenOrodd(int no){
	if(no%2==0)
		return 1;
	else
		return 0;
}
