#include<stdio.h>
int studentdiscount(int*);
int generalDiscount(int*);
void main()
{  
    char status;
    int price;
    printf("You are a student ?(y/n) :");
	scanf(" %c",&status);
	printf("Enter price:");
	scanf("%d",&price);
    if(status=='y' || status=='Y')
         printf("Discount is:%d",studentdiscount(&price));
    else
    	printf("Discount is:%d",generalDiscount(&price));
  
    
}
int studentdiscount(int*price)
{
	if(*price>=500)
		return *price*0.2;
	else
		return *price*0.1;
	
	}
int generalDiscount(int* price){
	if(*price>=600)
		return *price*0.15;		
	else
		return 0;
}