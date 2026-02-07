#include<stdio.h>
void isFact(int*);
void main() {
	int no;
	printf("Enter number:");
	scanf("%d",&no);
	isFact(&no);
}
void isFact(int*no){
	int i=1;
	long fact=1;
	while(i<=*no) {
		fact=fact*i;
		i++;
	}
		printf("The Factorial is: %ld",fact);
}