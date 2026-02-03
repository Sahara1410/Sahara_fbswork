#include<stdio.h>
void fact();
void main() {
	fact();
}
void fact(){
	int i=1,no;
	long fact=1;
	printf("Enter number:");
	scanf("%d",&no);
	while(i<=no) {
		fact=fact*i;
		i++;
	}
		printf("The Factorial is: %ld",fact);
}