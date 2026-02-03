#include<stdio.h>
void isStrong();
void main(){
	isStrong();
}
void isStrong()
{   int i;
    int range;
    printf("enter range:");
    scanf("%d",&range);
	for( i=1;i<=range;i++){
		int temp=i,sum=0;
		while(temp!=0){
			int rem=temp%10;
			int fact=1;
			for(int j=1;j<=rem;j++){
				fact=fact*j;
			}
			sum=sum+fact;
			temp=temp/10;
		}
	
		if(i==sum){
			printf("\n %d is strong number",i);
		}
	
		
}
}