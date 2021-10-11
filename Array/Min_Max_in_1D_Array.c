#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,n,choice;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	int *arr = (int*)malloc(n*sizeof(int));
	printf("\nEnter %d elements in array: ",n);
	for(i<0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("%d",arr[i]);
	}
	int max = arr[0];
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("\nMinimum: %d",max);
	int min = arr[0];
	for(i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("\nMinimum: %d",min);
return 0;	
}
