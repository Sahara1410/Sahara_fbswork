#include<stdio.h>
void menuDriven(int,int);
void main()
{
	int choice,num;
	while(1){
	printf("\n\t1.To check number is even or odd.");
	printf("\n\t2.To check number is prime or not.");
	printf("\n\t3.To check number is pallindrome or not.");
	printf("\n\t4.To check number is positive, negative or zero.");
	printf("\n\t5.To reverse a number.");
	printf("\n\t6.To find sum of digits.");
	printf("\n\t7.Exit.");//User Input
	printf("\n\tEnter the Choice: ");
	scanf("%d",&choice);
	menuDriven(choice,num);
}
void menuDriven(int choice, int num)
{
	
	if(choice==1){
		printf("\nEnter the number:");
		scanf("%d",&num);
		if(num%2==0)
			printf("\nThis number is even");
		else
			printf("\nThis number is odd");
	}
	else if(choice==2)
	{	
		printf("/nEnter the number:");
		scanf("%d",&num);
		int i,flag=0;
		for(i=2;i<=num;i++)
			if(num%i==0){
				flag==i;
				break;
			}
		if(flag==0)
			printf("\nThis number is prime");
		else
			printf("\nThis number is not prime");
	}
	else if(choice==3){
		int num;
		printf("\nEnter the number:");
		scanf("%d",&num);
		int temp=num,rev=0;
	
		while(temp!=0){
			 int rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
		}
		if(num==rev)
			printf("\nNumber is Palindrome");
		else
			printf("\nNumber is not Palindrome");
		
	}
	else if(choice==4){
		int num;
		printf("\nEnter the number:");
		scanf("%d",&num);
		if(num>0)
			printf("\nThis number is positive");
		else if(num<0){
			printf("\nThis number is not positive");
	}
		else
			printf("\nNumber is Zero");
	}

	
	else if(choice==5){
		int num;
		printf("\nEnter the number:");
		scanf("%d",&num);
		int rev=0;
		while(num!=0){
			int rem=num%10;
			rev=rev*10+rem;
			num=num/10;
		}
		printf("\n Reverse Number is %d",rev);
    }
    else if(choice==6){
		int num;
		printf("\nEnter the number:");
		scanf("%d",&num);
		int r,sum=0;
		while(num>0){
			r=num%10;
			sum=sum+r;
			num=num/10;
		}
		printf("\nThe sum is:%d",sum);
	}
	else if(choice==7){
		printf("\nExit");
		
}
    else
    	printf("\n-------INVALID CHOICE-------");
	}
}


	
	
	

	