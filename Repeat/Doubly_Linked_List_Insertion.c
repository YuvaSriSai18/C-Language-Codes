//Insertion of a node in a Doubly Linked List

#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *temp = NULL;
struct node *nextNode = NULL;

void insert_begin(int x)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->prev = NULL;
    newNode->data = x;
    newNode->next = NULL;
    
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;
        head = newNode;
        newNode->next = temp;
        temp->prev = newNode;
    }
}

void insert_pos(int pos, int x)
{
    int i = 1;
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    
    newNode->prev = NULL;
    newNode->data = x;
    newNode->next = NULL;
    
    struct node *current = head;
    while (i < pos - 1)
    {
        current = current->next;
        i++;
    }
    nextNode = current->next;
    
    newNode->prev = current;
    newNode->next = current->next;
    current->next = newNode;
    nextNode->prev = newNode;
}

void insert_end(int x)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    
    newNode->prev = NULL;
    newNode->data = x;
    newNode->next = NULL;
    
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}

void display()
{
    struct node *current = head;
    
    while (current != NULL)
    {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    int ch, pos, x;
    
    printf("1.Create\n2.Display\n3.Insert node at position\n4.Insert node at Ending\n");
    printf("\n\n");
    while (1)
    {
        printf("Enter choice : ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            printf("Enter x : ");
            scanf("%d", &x);
            insert_begin(x);
        }
        else if (ch == 2)
        {
            display();
        }
        else if (ch == 3)
        {
            printf("Enter value to insert : ");
            scanf("%d", &x);
            printf("Enter Position to be inserted : ");
            scanf("%d", &pos);
            
            if (pos < 0)
            {
                printf("Invalid Position !!\n");
            }
            else if (pos == 0)
            {
                insert_begin(x);
                printf("%d is inserted at position %d\n", x, pos);
            }
            else
            {
                insert_pos(pos, x);
                printf("%d is inserted at position %d\n", x, pos);
            }
        }
        else if (ch == 4)
        {
            printf("Enter value to insert : ");
            scanf("%d", &x);
            insert_end(x);
            printf("%d is Inserted\n", x);
        }
        else
        {
            exit(0);
        }
    }
    
    return 0;
}
