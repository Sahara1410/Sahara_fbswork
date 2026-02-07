#include<stdio.h>
void main()
{
	int arr[8]={1,2,3,4,5,6,7,8};
	int brr[5]={11,12,13,14,15};
	int crr[13];
	int i;
	printf("The first array is:\n");
	for(i=0;i<8;i++){
		printf("%d,",arr[i]);
		crr[i]=arr[i];
	}
	printf("\nThe second array is:\n");
	for(i=0;i<5;i++){
		printf("%d,",brr[i]);
		crr[i+8]=brr[i];
	}
	printf("\nThe merged array is:\n");
	for(i=0;i<13;i++){
		printf("%d,",crr[i]);
	}
	 
}