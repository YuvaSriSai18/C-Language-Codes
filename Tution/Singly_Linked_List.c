#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *link;
}Node;
/*
  This code defines a structure named node that represents a node in a linked list. 
  Each node has an integer data field (data) and a pointer to the next node (link).

Global Variable Declarations:

*/

struct node *head , *current;

/* The code declares two global pointers, head and current, which will be used to manipulate the linked list. 
head points to the first node in the list, and current is used for traversing the list and inserting nodes.

Insertion Function:

*/
int insert(int x)
{
    
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x ;
    
    if(head == NULL)
    {
        head = newNode ;
        newNode->link = NULL ;
    }
    else
    {
        struct node *current = head ;
        while(current->link != NULL)
        {
            current = current->link ;
        }
        current->link = newNode ;
        newNode->link = NULL;
    }
    
    return 0;
}
/*  The insert function is responsible for inserting a new node at the end of the linked list. 
    It takes an integer x as a parameter, representing the data of the new node.

It first allocates memory for a new node using malloc and assigns the data value x to the data field of the new node.
If the list is empty (i.e., head is NULL), the new node becomes the head. 
It assigns head to point to the new node and sets the link field of the new node to NULL.
If the list is not empty, the function traverses the list using 
the current pointer until it reaches the last node (i.e., the node whose link field is NULL). 
It then sets the link field of the last node to the new node and sets the link field of the new node to NULL, making it 
the last node in the list.

Display Function:
*/

void display(struct node *head)
{
    struct node *temp = head ;
    while(temp != NULL)
    {
        printf("%d ->",temp->data);
        temp = temp->link ;
    }
    printf("NULL\n");
}

/* The display function takes the head pointer as a parameter and prints the data of each node in the linked list
 until it reaches the end (i.e., NULL). It uses a temporary pointer temp to traverse the list.
  It prints the data of each node followed by an arrow (->) to indicate the next node.
   Finally, it prints "NULL" to signify the end of the list. 
*/

int main()
{
    int ch,x;
    
    printf("1.Insert\n2.Display\n3.Exit\n");
    
    while(3)
    {
        printf("Enter choice :  ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:
                  printf("Enter value to insert : ");
                  scanf("%d",&x);
                  insert(x);
                  break;
            case 2:
                  display(head);
                  break;
            case 3:
                   printf("Exiting !!!\n");
                   break;
            default: 
                  printf("Invalid Choice \n");
                  break;
        }
    }
}