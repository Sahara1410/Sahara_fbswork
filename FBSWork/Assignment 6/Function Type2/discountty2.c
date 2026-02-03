#include<stdio.h>
int studentdiscount();
int generalDiscount();
void main()
{   char status;
    int discount;
    	printf("You are a student ?(y/n) :");
	scanf(" %c",&status);
    if(status=='y' || status=='Y')
         printf("Discount is:%d",studentdiscount());
    else
    	printf("Discount is:%d",generalDiscount());
    
}
int studentdiscount()
{
	int price,fp,discount;
	printf("Enter price:");
	scanf("%d",&price);
	if(price>=500)
		return price*0.2;
	else
		return price*0.1;
	fp=price-discount;
	printf("\nMRP =%d \ndiscount = %d \nfinal price =%d",price,discount,fp);
	
	}
int generalDiscount(){
	int price,fp,discount;
	printf("Enter price:");
	scanf("%d",&price);
	if(price>=600)
		return price*0.15;		
	else
		return 0;
	
	fp=price-discount;
	printf("\nMRP =%d \ndiscount = %d \nfinal price =%d",price,discount,fp);
	
}