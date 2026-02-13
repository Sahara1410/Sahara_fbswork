#include<stdio.h>
#include<stdlib.h>
int* isMerge(int*, int , int*, int );
void main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    int brr[5] = {11,12,13,14,15};
    int i;
	int *merged = isMerge(arr, 8, brr, 5);
	printf("The merged array is:\n");
    for(i = 0; i < 13; i++)
    {
        printf("%d ", merged[i]);
    }
    free(merged);
}
int* isMerge(int* arr, int size1, int* brr, int size2 )
{
	
    int i;
    int *crr = (int*)malloc((size1 + size2) * sizeof(int));
    for(i = 0; i < size1; i++)
    {
        crr[i] = arr[i];
    }
    for(i = 0; i < size2; i++)
    {
        crr[size1 + i] = brr[i];
    }
	return crr;
}

