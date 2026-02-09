#include<stdio.h>
int isStrong(int n[]);
void main() 
{
	int n[1];
	printf("Enter the number:");
	scanf("%d",&n);
	isStrong(n);

}
int isStrong(int n[]){
	int temp=n[0];
	int sum=0;
	while(n[0]!=0) {
		int fact=1;
		int i=1;
		int r=n[0]%10;
		while(i<=r) {
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		n[0]=n[0]/10;
	}
	if(temp==sum)
			printf("The Number is strong");
	else
		printf("The number is not strong");
}