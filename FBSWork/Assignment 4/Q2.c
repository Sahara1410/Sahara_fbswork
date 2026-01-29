#include<stdio.h>
void main() {
	int i,j;
	int range;
	printf("enter range:");
	scanf("%d",&range);
	for( i=2; i<=range; i++) {
		int flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0){
				flag=1;
				break;
			}
		}
			if(flag==0) {
				printf("\n %d is prime number",i);
		}


	}
}
