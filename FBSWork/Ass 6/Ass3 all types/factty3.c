#include<stdio.h>
void isFact(int,int,long);
void main() {
	int i=1,no;
	long fact=1;
	printf("Enter number:");
	scanf("%d",&no);
	isFact(i,no,fact);
}
void isFact(int i,int no,long fact){
	while(i<=no) {
		fact=fact*i;
		i++;
	}
		printf("The Factorial is: %ld",fact);
}