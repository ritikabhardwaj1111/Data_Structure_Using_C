// Average of n numbers using arrays

#include<stdio.h>
#include<conio.h>
void main(){
	int arr[20],n,i,avg=0,sum=0;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	printf("Enter %d elements in array\n",n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d]: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum += arr[i];
	}
	avg = sum / n;
	printf("Average: %d",avg);
	
}
