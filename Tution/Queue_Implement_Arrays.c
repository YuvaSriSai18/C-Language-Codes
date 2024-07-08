#include <stdio.h>
#include <stdlib.h>
#define max 5
int queue[max];
int front=-1,rear=-1;


void addq(int x)
{
	if(rear==max-1)
	{
		printf("\nqueue overflow ");
		exit(0);
	}
	rear++;
	queue[rear]=x;
	printf("%d element is successfully inserted",x);
}

void delete()
{
	int y;
	if(front==rear)
	{
		printf("\nQueue Underflow");
		exit(0);
	}
	front++;
	y=queue[front];
	printf("%d element is successfully deleted from queue ",y);
}

void display()
{
	int i;
	if(front==rear)
	{
		printf("\nQueue is Empty");
		exit(0);
	}
	else
	{
		printf("\nElements of Queues are:");	
		for (i = front+1; i <=rear; i++)
		printf("%d ",queue[i]);
	}
}

int main()
{
	int ch,x;
	while(1)
	{
		printf("\n*****MAIN MENU*****");
		printf("\n 1:ENQUEUE\n 2:DEQUEUE\n 3:DISPLAY\n 4:EXIT");
		printf("\nEnter Your Choice:	");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
					printf("\nEnter an element: ");
					scanf("%d",&x);
					addq(x);
					break;
			case 2: 
					delete();
					break; 
			case 3: 	
					display();
					break;
			case 4:
					 exit(0);
			default:
					printf("\nwrong choice");
		}
	}
}

