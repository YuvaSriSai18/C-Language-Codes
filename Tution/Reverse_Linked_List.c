#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *link;
}*temp;

struct Node *HEAD,*ptr,*ptr1;

void create(int n)
{
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=n;
	temp->link=NULL;
	if(HEAD==NULL)
	{
		HEAD=temp;
		ptr=HEAD;
	}
	else
	{
		ptr->link=temp;
		ptr=temp;
	}
}

void reversedisplay()
{
	ptr = HEAD;
	temp = HEAD->link;
	HEAD = HEAD->link;
	ptr->link = NULL;
	while(HEAD != NULL)
	{
		HEAD = HEAD->link;
		temp->link = ptr;
		ptr = temp;
		temp = HEAD;
	}
	HEAD = ptr;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		printf("-->");
		ptr=ptr->link;
	}
	printf("NULL");
}

void main()
{
	int ch,i,m,n;
	while(1)
	{
		printf("\n**** MAIN MENU ****");
		printf("\n1:CREATE\n2:DISPLAY REVERSE\n3:EXIT\n");
		printf("\nEnter Your Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					printf("\n Enter total no of Elements:"); scanf("%d",&m);
					printf("\n Enter elements:");
					for(i=1;i<=m;i++)
					{
						scanf("%d",&n);
						create(n);
					}
					break;
			case 2:
 					reversedisplay();
					break;
			case 3:
 					exit(0);
 					break;
		}
	}
}