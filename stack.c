#include<stdio.h>
#include<stdlib.h>

int stack[50],top=-1;

void push()							//Function to add an element to Stack
{	int n;
	if(top==50)						//Checking if the memory is full
		printf("stack full!");				//To avoid memory Overflow
	else
	{	printf("Enter the number to be inserted :");
		scanf("%d",&n);					//Reading the element	
		top++;						//Incrementing top pointer
		stack[top]=n;					//Adding the element to the stack
	}
}

int pop()							//Function to delete an element from Stack
{	int n;
	if(top==-1)						//Checking if the stack is empty 
		printf("stack empty!");				//To prevent Underflow
	else				
	{	n=stack[top];					//Storing the deleted element to n
		top--;						//Decrementing the top pointer
		return(n);					//Returning the deleted element
	}
}

void display()							//Function to display the entire stack
{	int i;
	printf("\n\n");
	for(i=top;i>=0;i--)					//Traversing the stack
		printf("%d\n",stack[i]);			//Printing the stack elements
}

void main()	
{	int menu,i,n;
	while(1)
	{	printf("1.push\n2.pop\n3.display\n4.exit\n");	//Displaying the menu
		scanf("%d",&menu);				//Reading the choice
		switch(menu)						
		{	case 1:	push();				//Calling the push function
				break;	
			case 2:	n=pop();			//Calling the pop function and getting the deleted element
				printf("\n%d\n",n);		//Printing the deleted element
				break;
			case 3:	display();			//Calling the Display function
				break;
			case 4:	exit(0);			//To exit out from the menu
				break;
			default:printf("invalied input!");	//To deal all other invalid inputs
		}
	}
}
