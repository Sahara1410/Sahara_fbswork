#include<stdio.h>
void isFact(int no[]);
void main() {
	int no[1];
	printf("Enter number:");
	scanf("%d",&no);
	isFact(no);
}
void isFact(int no[]){
	int i=1;
	long fact=1;
	while(i<=no[0]) {
		fact=fact*i;
		i++;
	}
		printf("The Factorial is: %ld",fact);
}