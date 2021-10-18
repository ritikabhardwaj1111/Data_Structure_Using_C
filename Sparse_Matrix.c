#include<stdio.h>
#include<conio.h>
void main(){
	int arr[20][20],r,c,i,j,count;
	printf("Enter number of rows : ");
	scanf("%d",&r);
	printf("Enter number of coloums : ");
	scanf("%d",&c);
	printf("Enter elements in array:	");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element at array[%d][%d]:	",i,j);
			scanf("%d",arr[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		if(arr[i][j]==0)
		{
			count++;
			}
		}
	}
	if((r+c)/2<count)
		printf("Its a sparse matrix");
		else
		printf("Its not a sparse matrix");
}
