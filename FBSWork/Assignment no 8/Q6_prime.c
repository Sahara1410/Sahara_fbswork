#include<stdio.h>
void main()
{
	int arr[6]={5,7,6,8,3,4};
		printf("Prime numbers are:");
	for(int i=0;i<6;i++){
		int status=1;
		for(int j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			status=0;
			break;
		}
		if(status==1)
			printf("\n%d",arr[i]);
	}
	
}