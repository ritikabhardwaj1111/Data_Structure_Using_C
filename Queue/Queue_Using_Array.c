#include<stdio.h>
#include<conio.h>
#define MAX 6
int arr[MAX],item,i;
int front = -1, rare= -1;
void enqueue();
void dequeue();
void display();
void main(){
 int choice;
 while(1){
 printf("\n1. Enqueue");
 printf("\n2. Dequeue");
 printf("\n3. Display");
 printf("\n4. Exit");
 printf("\nEnter the choice (1-4) : ");
 scanf("%d",&choice);
 switch(choice){
 	case 1:
 		enqueue();
 		break;
 		
 	case 2:
 		dequeue();
	 	break;
		 
	case 3:
		display();
		break;
		
	case 4:
		exit(1);
		break;		 	
 	}
  }
}
void enqueue(){
		if(rare==MAX-1)
 		{
 			printf("Overflow");
		}
		else
		{
 		printf("Enter the element: ");
 		scanf("%d",&item);
 		if(front == -1)
 		{
		 front = 0;
		}
 		rare = rare+1;
 		arr[rare] = item;
 	    }
}

void dequeue(){
		if(front== -1 || front > rare)
 		{
 			printf("Underflow");
		}
		else
		{
 		front = front + 1;
     	}
}

void display(){
		if(front== -1)
		{
			printf("Queue is empty ");
		}
		else
		{
			for(i=front;i<=rare;i++)
		{
			printf("%d	",arr[i]);
		}
    	}
}
