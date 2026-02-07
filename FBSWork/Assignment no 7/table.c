#include<stdio.h>
void table(int*);
void main()
{
	int i=1;
	table(&i);	
}
void table(int*i){
	while(*i<=10)
	{
		int res=5*(*i);
		
		(*i)++;
		printf("\n%d",res);
	}
}