#include<stdio.h>
int isStrong(int);
void main() 
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	isStrong(n);

}
int isStrong(int n){
	int temp=n;
	int sum=0;
	while(n!=0) {
		int fact=1;
		int i=1;
		int r=n%10;
		while(i<=r) {
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(temp==sum)
			printf("The Number is strong");
	else
		printf("The number is not strong");
}