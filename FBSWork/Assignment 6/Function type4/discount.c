#include<stdio.h>
int studentdiscount(int,int,int);
int generalDiscount(int,int,int);
void main()
{   char status;
    	printf("You are a student ?(y/n) :");
	scanf(" %c",&status);
	int price,fp,discount;
	printf("Enter price:");
	scanf("%d",&price);
    if(status=='y' || status=='Y')
         printf("Discount is:%d",studentdiscount(price,fp,discount));
    else
    	printf("Discount is:%d",generalDiscount(price,fp,discount));
    
}
int studentdiscount(int price,int fp,int discount)
{
	if(price>=500)
		return price*0.2;
	else
		return price*0.1;
	fp=price-discount;
	printf("\nMRP =%d \ndiscount = %d \nfinal price =%d",price,discount,fp);
	
	}
int generalDiscount(int price,int fp,int discount){
	if(price>=600)
		return price*0.15;		
	else
		return 0;
	
	fp=price-discount;
	printf("\nMRP =%d \ndiscount = %d \nfinal price =%d",price,discount,fp);
	
}