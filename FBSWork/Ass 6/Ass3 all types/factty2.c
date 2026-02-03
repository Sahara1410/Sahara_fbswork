#include<stdio.h>
int fact();
void main() {
		printf("The Factorial is: %ld",fact());
}
int fact(){
	int i=1,no;
	long fact=1;
	printf("Enter number:");
	scanf("%d",&no);
	while(i<=no) {
		fact=fact*i;
		i++;
	}
	return fact;
}