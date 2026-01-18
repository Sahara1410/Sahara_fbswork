#include<stdio.h>
void main()
{
	int price,fp,discount;
	char ch;
	printf("Enter price:");
	scanf("%d",&price);
	printf("You are a student ?(y/n) :");
	scanf(" %c",&ch);
	if(ch=='y')
	{
		
		if(price>=500)
	{
		discount=price*0.2;
		printf("discount in 20 percent");
	}
	else
	{
		discount=price*0.1;
		printf("discount in 10 percent");
	
	}
	}

	else if(ch=='n')
	{
		printf("No");
	if(price>=600)
	{
		discount=price*0.15;
		printf("discount in 15 percent");
	
	}	
	else
		{
		discount=0;
		printf("No discount");	
	    }
	}
	
	fp=price-discount;
	printf("\nMRP =%d \ndiscount = %d \nfinal price =%d",price,discount,fp);
	
}