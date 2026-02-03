#include<stdio.h>
int isFact(int,int,long);
void main() {
	int i=1,no;
	long fact=1;
	printf("Enter number:");
	scanf("%d",&no);
	int res=isFact(i,no,fact);
		printf("The Factorial is: %ld",res);
}
int isFact(int i,int no,long fact){
	while(i<=no) {
		fact=fact*i;
		i++;
	}
	return fact;
}