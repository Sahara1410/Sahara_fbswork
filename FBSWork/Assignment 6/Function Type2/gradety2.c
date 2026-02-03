#include<stdio.h>
int grade();
void main()
{
	char res=grade();
	if(res=='a')
		printf("Distinction");
	if(res=='b')
		printf("first class");
	if(res=='c')
		printf("second class");
	if(res=='d')
		printf("pass class");
	if(res=='e')
		printf("fail");
}
int grade(){
	int marks;
	printf("Enter Marks:");
	scanf("%d",&marks);
	if(marks>=75)
		return 'a';
	else if(marks>=65)
		return 'b';
	else if(marks>=55)
		return 'c';
	else if(marks>=40)
		return 'd';
	else if(marks<40)
		return 'e';

}