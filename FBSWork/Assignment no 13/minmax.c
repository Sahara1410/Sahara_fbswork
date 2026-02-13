#include<stdio.h>
#include<stdlib.h>
int* isMax(int*, int);
int* isMin(int*, int);
void main()
{
    int arr[10]={23,34,12,56,7,89,45,32,45,76};
    int i;
	printf("The elements are:\n");
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
	int *max = isMax(arr,10);
    int *min = isMin(arr,10);
	printf("\nThe maximum element is:%d", *max);
    printf("\nThe minimum element is:%d", *min);
    free(max);
    free(min);
}

int* isMax(int* arr, int size)
{
    int *max = (int*)malloc(sizeof(int)); // allocate 1 int
    *max = arr[0];
	for(int i=1;i<size;i++)
    {
        if(arr[i] > *max)
            *max = arr[i];
    }
    return max;
}

int* isMin(int* arr, int size)
{
    int *min = (int*)malloc(sizeof(int)); 
    *min = arr[0];
	for(int i=1;i<size;i++)
    {
        if(arr[i] < *min)
            *min = arr[i];
    }
    return min;
}
