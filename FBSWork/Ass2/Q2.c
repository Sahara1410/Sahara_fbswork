#include<stdio.h>
void main()
{
	int s1,s2,s3;
	printf("Enter Size:");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1==s2 && s1==s3)
	{
		printf("This triangle is Equilateral");
    }
	else if(s1==s2 || s1==s3 || s2==s3)
	{
		printf(" This triangle is Isosceles");
	}
	else
	{
		printf("This triangle is Scalene");
	}
}
