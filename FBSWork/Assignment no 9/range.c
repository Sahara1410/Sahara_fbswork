#include<stdio.h>
void range(int i[]);
void main()
{
	int i[1]={1};
	range(i);
}
void range(int i[]){
	while(i[0]<=10){
		printf("\n%d",i[0]);
		i[0]++;}
}