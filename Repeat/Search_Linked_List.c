#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *head ;
void create(int y)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = y;
    newNode->link = NULL;
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
}
void search(int x)
{
    struct node *temp = head ;
    int count = 0 ;
    while(temp != NULL)
    {
        if(temp->data == x)
        {
            count++;
        }
        temp = temp->link ;
    }
    if(count == 1)
    {
        printf("%d is found\n",x);
    }
    else
    {
        printf("%d is not found\n",x);
    }
}
void display()
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->link ;
    }
    printf("NULL\n");
}
int main()
{
    int ch,n,se;
    printf("1.Insert\n2.Display\n3.Search\n4.Exit\n");
    while(ch != 4)
    {
        printf("\nEnter choice : ");
        scanf("%d",&ch);
        
        if(ch == 1)
        {
            printf("Enter value to be inserted :    ");
            scanf("%d",&n);
            create(n);
        }
        else if(ch == 2)
        {
            display();
        }
        else if(ch == 3)
        {
            printf("Enter value to Search : ");
            scanf("%d",&se);
            search(se);
        }
        else
        {
            printf("Terminating !!!\n");
        }
    }
    
}