#include<stdio.h>
void Armstrong();
void main() {
	Armstrong();
}
void Armstrong() {
	int range;
	printf("enter range:");
	scanf("%d",&range);
	int no;
	for( int i=1; i<=range; i++) {
		no=i;
		int sum=0;
		int count=0;
		while(no!=0) {
			count++;
			no=no/10;
		}
		no=i;
		while(no!=0) {
			int rem=no%10;
			int res=1;
			for(int j=1; j<=count; j++) {
				res=res*rem;
			}

			sum=sum+res;
			no=no/10;
		}
		if(sum==i) {
			printf("\n %d is Armstrong number",i);
		}
	}
}
