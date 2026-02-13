#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size = 5;
	int *arr1 = malloc(size*sizeof(int));
    int *arr2 = malloc(size*sizeof(int));
    int *arr3 = malloc(size*sizeof(int));
	printf("Enter elements of first array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr1[i]);
    }
	printf("Enter elements of second array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr2[i]);
    }
	for(int i=0;i<size;i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
	printf("Sum of array is:\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr3[i]);
    }
	free(arr1);
    free(arr2);
    free(arr3);
}
