#include<stdio.h>
int isArmstrong(int );
int getCount(int );
int power(int ,int );
void main()
{
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	int res=isArmstrong(no);
	if(res==1)
		printf("Number is Armstrong");
	else
		printf("Number is not armstrong");
}
int isArmstrong(int no)
{
	int temp=no;
	int count=getCount(no);
	int sum=0;
	while(no>0){
		int rem=no%10;
		sum=sum+power(rem,count);
		no=no/10;
	}
	if(sum==temp)
		return 1;
	else
		return 0;
}
int getCount(int no)
{
	int count=0;
	while(no>0){
	count++;
	no=no/10;
	}
return count;
}
int power(int base,int exp)
{
	int res=1;
	for(int i=1;i<=exp;i++)
	{
		res=res*base;
	}
	return res;
}

	

	
	
