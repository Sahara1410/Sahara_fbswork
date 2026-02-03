#include<stdio.h>
void range(int);
void main()
{
	int i=1;
	range(i);
}
void range(int i){
	while(i<=10){
		printf("\n%d",i);
		i++;}
}