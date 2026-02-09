#include<stdio.h>
int studentdiscount(int price[]);
int generalDiscount(int price[]);
void main()
{  
    char status;
    int price[1];
    printf("You are a student ?(y/n) :");
	scanf(" %c",&status);
	printf("Enter price:");
	scanf("%d",&price);
    if(status=='y' || status=='Y')
         printf("Discount is:%d",studentdiscount(&price[0]));
    else
    	printf("Discount is:%d",generalDiscount(&price[0]));
  
    
}

int studentdiscount(int price[])
{
	if(price[0]>=500)
		return price[0]*0.2;
	else
		return price[0]*0.1;
	
	}
int generalDiscount(int price[]){
	if(price[0]>=600)
		return price[0]*0.15;		
	else
		return 0;
}

