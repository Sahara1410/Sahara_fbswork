#include<stdio.h>
void main() {
	int no;
	printf("Enter number:");
	scanf("%d",&no);
	while(no/100==no%10) {
		no++;
		printf("This number is palindrome");
	}

}