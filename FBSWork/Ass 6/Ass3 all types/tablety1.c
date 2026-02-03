#include<stdio.h>
void table();
void main()
{
	table();	
}
void table(){
int i=1;
	int res;
	while(i<=10)
	{
		res=5*i;
		i++;
		printf("\n%d",res);
	}
}