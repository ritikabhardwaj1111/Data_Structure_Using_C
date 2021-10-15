#include<stdio.h>
#include<conio.h>
void push();
void pop();
void display();
	int arr[10],item;
	int top= -1;
void main(){
	int choice;
	while(1){
		printf("\n1. Push\n");
		printf("2. Pop\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
	switch(choice){
		case 1:
			push();
			break;
			
		case 2:
		  pop();	
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
 
void push()
{  
    if(top==9)
    {
    	printf("Overflow: Insertion cannot be performed as Stack is full !");    	
	}
	else
	{
			printf("Enter element: ");
			scanf("%d",&item);
			top= top+1;
			arr[top]=item;
			printf("\nThe element has been pushed.");
	}
}

void pop(){
	if(top==-1)
	{
		printf("Underflow: Element cannot be poped out !");
	}
	else
	{
		top=top-1;
		printf("\nElement has been deleted\n");
	}
}

void display(){
	for(int i=top;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}
