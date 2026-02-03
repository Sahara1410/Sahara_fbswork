#include<stdio.h>
void table(int,int);
void main()
{
	int i=1;
	int res;
	table(i,res);	
}
void table(int i,int res){
	while(i<=10)
	{
		res=5*i;
		i++;
		printf("\n%d",res);
	}
}