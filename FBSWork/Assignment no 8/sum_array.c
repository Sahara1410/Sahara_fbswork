#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,4,5};
	int brr[5]={10,20,30,40,50};
	int crr[5];
	int i;
	printf("The first array is:");
	for(i=0;i<5;i++){
		printf("%d,",arr[i]);}
	printf("\nThe second array is:");
	for(i=0;i<5;i++){
		printf("%d,",brr[i]);}
	
	for(int i=0;i<5;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	printf("\nSum of array is:");
	for(int i=0;i<5;i++){
		printf("%d,",crr[i]);
	}
}