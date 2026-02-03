#include<stdio.h>
void perfect();
void main(){
	perfect();
}
void perfect() {
	int i,j;
	int range;
	printf("enter range:");
	scanf("%d",&range);
	for( i=1; i<=range; i++) {
		int sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0){
				sum=sum+j;
			}
		}
			if(sum==i && i!=0) {
				printf("\n %d is perfect number",i);
		}


	}
}
