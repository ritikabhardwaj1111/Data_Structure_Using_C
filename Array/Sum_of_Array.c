#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,sum=0;
	printf("Enter the size of an array: ");
	scanf("%d",&size);
	int *arr = (int*)malloc(size*sizeof(int));
	printf("\nEnter %d elements in an array: ",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
    }
    printf("Elements: ");
    for(i=0;i<size;i++)
	{
    	printf("%d ",arr[i]);
		sum = sum +arr[i];
    }    
 printf("\nSum: %d ",sum);
}
