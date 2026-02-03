#include<stdio.h>
int triangle(int,int,int);
void main()
{
	int s1,s2,s3;
	printf("Enter Size:");
	scanf("%d%d%d",&s1,&s2,&s3);
	int res=triangle(s1,s2,s3);
	if(res==1)
		printf("This triangle is Equilateral",res);
	else if(res==2)
		printf(" This triangle is Isosceles",res);
	else
		printf("This triangle is Scalene",res);
}
int triangle(int s1,int s2,int s3){
	if(s1==s2 && s1==s3)
		return 1;
	else if(s1==s2 || s1==s3 || s2==s3)
		return 2;
	else
		return 0;
}
