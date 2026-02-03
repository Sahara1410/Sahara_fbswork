#include<stdio.h>
int isStrong(int,int,int,int,int,int);
void main() 
{
	int n,i,r,fact;
	printf("Enter the number:");
	scanf("%d",&n);
	int sum=0;
	int temp=n;
	isStrong(n,i,r,fact,sum,temp);

}
int isStrong(int n,int i,int r,int fact,int sum,int temp){
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