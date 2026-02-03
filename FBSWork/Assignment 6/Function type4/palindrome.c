#include<stdio.h>
int isPalindrome(int);
void main()
{
    int num;
	printf("Enter the number:");
	scanf("%d",&num);
	isPalindrome(num)?printf("Num is palindrome"):printf("num is not palindrome");
}
int isPalindrome(int num){
if(num/100==num%10)
	return 1;
else
	return 0;
}