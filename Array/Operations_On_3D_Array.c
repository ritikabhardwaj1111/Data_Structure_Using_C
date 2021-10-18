#include<stdio.h>
#include<conio.h>
void main(){
	int c, r,i,j,choice;
  	int arr[20][20],arr0[20][20],arr1[20][20];
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	printf("Enter the number of coloums: ");
	scanf("%d",&c);
	printf("Enter elements in array 1:	\n");
  	for(i=0;i<r;i++)
  		{
  			for(j=0;j<c;j++)
  			{
  				printf("Enter element at Array1[%d][%d]: ",i,j);
  				scanf("%d",&arr[i][j]);
  		    }
       }
       printf("\nEnter elements in array 1:	\n");
       	for(i=0;i<r;i++)
  		{
  			for(j=0;j<c;j++)
  			{
  				printf("Enter element at Array2[%d][%d]: ",i,j);
  				scanf("%d",&arr0[i][j]);
  		    }
       }
    while(1){
    	printf("\n1. Addition");
    	printf("\n2. Substract");
    	printf("\n3. Multiplication");
    	printf("\n4. Exit");
    	printf("\nEnter your choice: ");
    	scanf("%d",&choice);
    	switch(choice){
    		case 1:
    			for(i=0;i<r;i++)
    			{
    				for(j=0;j<c;j++)
    				{
    					arr1[i][j] = arr[i][j] + arr0[i][j];
    					printf("%d	",arr1[i][j]);
					}
					
				printf("\n");
				}
				break;
				
			case 2:
				for(i=0;i<r;i++)
    			{
    				for(j=0;j<c;j++)
    				{
    					arr1[i][j] = arr[i][j] - arr0[i][j];
    					printf("%d	",arr1[i][j]);
					}
					
				printf("\n");
				}
				break;
				
			case 3:
			  		for(i=0;i<r;i++)
    			{
    				for(j=0;j<c;j++)
    				{
    					arr1[i][j] += arr[i][j] * arr0[i][j];
    					printf("%d	",arr1[i][j]);
					}
					
				printf("\n");
				}
				break;
				
			case 4:
				exit(1);
				break;	
		}	
   	 }   
   }
