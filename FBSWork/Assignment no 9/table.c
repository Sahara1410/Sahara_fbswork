#include<stdio.h>
void table(int i[]);
void main()
{
	int i[1]={1};
	table(i);	
}
void table(int i[]){
	while(i[0]<=10)
	{
		int res=5*(i[0]);
		
		i[0]++;
		printf("\n%d",res);
	}
}