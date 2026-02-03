#include<stdio.h>
int isStrong(int,int,int,int,int,int);
void main() 
{
	int n,i,r,fact;
	printf("Enter the number:");
	scanf("%d",&n);
	int sum=0;
	int temp=n;
	int res=isStrong(n,i,r,fact,sum,temp);
	if(res==1)
		printf("The Number is strong",res);
	else
		printf("The number is not strong",res);
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
		return 1;
	else
		return 0;
}