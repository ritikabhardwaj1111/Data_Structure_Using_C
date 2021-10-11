#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n,j;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	int *org = (int *)malloc(n*sizeof(int));
	int *temp = (int *)malloc(n*sizeof(int));
	printf("\nEnter the elements in the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&org[i]);
	}
	printf("\nOrignal array: ");
	for(i=0;i<n;i++)
	{
		printf("%d	",org[i]);
	}
	printf("\nCopied Array: ");
		for(i=0;i<n;i++)
	{
			temp[i] = org[i];
			printf("%d	",temp[i]);
	}
	
	return 1;
}
