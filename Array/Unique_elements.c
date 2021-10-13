// Print all the unique elements in array

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	int i,n,j,count;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
    int	*arr = (int*)malloc(sizeof(int));
	printf("Enter %d elements in array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(i!=j){
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		}
		if(count==0)
		{
			printf("%d Element is unique \n",arr[i]);
		}
	}
}
