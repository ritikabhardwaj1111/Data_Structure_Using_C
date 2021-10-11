#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	int *arr = (int *)malloc(n*sizeof(int));
	printf("\nEnter the elements in the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("%d	",arr[i]);
	}
	printf("\nReversed Array: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d	",arr[i]);
	}
	return 1;
}
