#include<stdio.h>
#include<conio.h>
void main(){
	int n , i, *arr,choice,item,pos;
	int flag =0;
	arr = (int*)malloc(n*sizeof(int));
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter %d elements in array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	while(1){
		printf("\n1. Insert at the end of an array");
		printf("\n2. Insert at given position");
		printf("\n3. Delete an element");
		printf("\n4. Search a element");
		printf("\n5. Traverse");
		printf("\n6. Exit");
		printf("Enter your choice (1-): ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the item to be inserted: ");
				scanf("%d",&item);
				n = n+1;
				arr[n-1] = item;
				break;
				
			case 2:
				printf("Enter the position to insert an element: ");
				scanf("%d",&pos);
				printf("\nEnter the element:	");
				scanf("%d",&item);
				for(i=n;i>=pos;i--)
				{
					arr[i] = arr[i-1];
				}
				arr[pos] = item;
				n++;
				break;
				
			case 3:
			  printf("Enter which position to delete: ");
			  scanf("%d",&pos);
			  for(i=pos-1;i<n;i++)
			  {
			  	arr[i]=arr[i+1];
			  }
			  n--;
			  break;
			  
			case 4:
				printf("Enter the element to be serached: ");
				scanf("%d",&item);
				for(i=0;i<n;i++)
				{
					if(arr[i]==item)
					{
						flag=1;
						break;
					}
			    }
				if(flag==1)
				{
						printf("%d found at poistion %d",item,(i+1));
				}
				else
				{
					printf("%d is not present in the list",item);
				}
				break;  	
			  	
			case 5:
			 for(i=0;i<n;i++)
			 {
			 	printf("%d	",arr[i]);
				 }	
				break; 
				
			case 6:
				exit(1);
				break;		
		}
	}
}
