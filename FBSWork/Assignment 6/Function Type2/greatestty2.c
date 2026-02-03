#include<stdio.h>
int greatest();
void main()
{
	printf("The greatest no is:%d",greatest());
}
int greatest(){
int a,b,c;
	printf("Enter a Number:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
		return a;
	else if(b>a && b>c)
	    return b;
	else
		return c;
	}
