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
void insert()
{
    temp=(struct Node*)malloc(sizeof(struct Node));
    
    ptr1=NULL;
    ptr=HEAD;
    
	int count=1,pos,ch,n;
	
	printf("\nEnter an Element:");
	scanf("%d",&n);
	
	temp->data=n;
	temp->link=NULL;
	
	printf("\n INSERT AS\n1:AT THE FRONT\n2:AT THE END\n3:AT ANY OTHERPOSITION");
	
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			temp->link=HEAD;
			HEAD=temp;
			break;
		case 2:
			while(ptr->link!=NULL)
				ptr=ptr->link;
			ptr->link=temp;
			break;
		case 3:
			printf("\nEnter the position to insert:	");
			scanf("%d",&pos);

			while(count!=pos)
			{
				ptr1=ptr;
				ptr=ptr->link;
				count++;
			}
			if(count==pos)
			{
				ptr1->link=temp;
				temp->link=ptr;
			}
			break;
	}
}
void display() 
{ 
	ptr=HEAD;
 	if(ptr==NULL) 
		printf("\nList is Empty");
 	else 
	{ 
		while(ptr!=NULL) 
		{ 
			printf("%d",ptr->data); 
			printf("-->"); 
			ptr=ptr->link; 
		} 
		printf("NULL"); 
	} 
}
int main() 
{ 
	int ch,i,m,n; 
	while(1) 
	{ 
		printf("\n**** MAIN MENU ****");
		printf("\n1:CREATE\n2:INSERT\n3:DISPLAY\n4:EXIT\n"); 
		
		printf("\nEnter Your Choice:	"); 
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					printf("\nEnter total number of elements:	");
					scanf("%d",&m);

					printf("\nEnter elements:	");
					for(i=1;i<=m;i++)
					{
						scanf("%d",&n);
						create(n);
					}
					break;
			case 2:
					insert();
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
