#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a Number:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greater");
			}
			else
			{
				printf("c is greater");
				
			}
		}
		else if(b>c)
		{
		    printf("b is greater");
		}
		    else
		    {
		    	printf("c is greater");
			}
		}
	
	
