#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* link;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void addq(int n)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = n;
	temp->link = NULL;

	if (front == NULL)
	{
		front = rear = temp;
	}
	else
	{
		rear->link = temp;
		rear = temp;
	}

	printf("%d element is inserted into the queue\n", n);
}

void delete()
{
	if (front == NULL)
	{
		printf("Queue is empty!!! Deletion is not possible!!!\n");
		return;
	}

	struct Node* temp = front;
	printf("%d element is deleted from the queue\n", temp->data);
	front = front->link;

	free(temp);
}

void display()
{
	if (front == NULL)
	{
		printf("\nThe queue is empty\n");
		return;
	}

	struct Node* temp = front;
	
	while(temp != NULL)
	{
		printf("%d", temp->data);

		if (temp->link != NULL)
		{
			printf(" --> ");
		}
		
		temp = temp->link;
	}
	printf("\n");
}


int main()
{
	int ch, n;

	while(1)
	{
		printf("\n**** MAIN MENU ****");
		printf("\n1: ENQUEUE\n2: DEQUEUE\n3: DISPLAY\n4: EXIT\n");
		printf("\nEnter Your Choice: ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1: 
				printf("\nEnter an element to insert: ");
				scanf("%d", &n);
				addq(n);
				break;
			case 2: 
				delete();
				break;
			case 3: 
				display();
				break;
			case 4: 
				exit(0);
		}
	}

	return 0;
}

