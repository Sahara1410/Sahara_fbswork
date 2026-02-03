#include<stdio.h>
int studentdiscount(int,int);
int generalDiscount(int,int);
void main()
{  
    char status;
    int price,discount;
    printf("You are a student ?(y/n) :");
	scanf(" %c",&status);
	printf("Enter price:");
	scanf("%d",&price);
    if(status=='y' || status=='Y')
         printf("Discount is:%d",studentdiscount(price,discount));
    else
    	printf("Discount is:%d",generalDiscount(price,discount));
  
    
}
int studentdiscount(int price,int discount)
{
	if(price>=500)
		return price*0.2;
	else
		return price*0.1;
	
	}
int generalDiscount(int price,int discount){
	if(price>=600)
		return price*0.15;		
	else
		return 0;
}