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
void delet() 
{ 
    ptr1=NULL; 
    int ch,pos,count=1;
    ptr=HEAD; 
    printf("\nDELETE AS \n1:AT THE FRONT\n2:AT THE END\n3:AT ANY OTHER POSITION"); 
     
    printf("\nEnter Your Choice:	");
    scanf("%d",&ch);
    
	switch(ch) 
    { 
    	case 1:
            	if(HEAD!=NULL) 
            	{ 
                	printf("\nDeleted Element is:	%d",HEAD->data);
                	HEAD=HEAD->link; 
            	} 
            	break;
        case 2: 
            	while(ptr->link!=NULL)
            	{
                	ptr1=ptr;
                	ptr=ptr->link;
            	}
        		printf("\nDeleted element is :	%d",ptr->data);
            	ptr1->link=NULL;
            	break;
        case 3: 
                printf("\nEnter the Position of Deletion:	");
                scanf("%d",&pos); 
                while(count!=pos) 
                {  
                    ptr1=ptr; 
                    ptr=ptr->link;
                    count++; 
                } 
                if(count==pos) 
                { 
                    printf("\nDeleted Element is:	%d",ptr->data);
                    ptr1->link=ptr->link; 
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

        printf("\n1:CREATE\n2:DELETE\n3:DISPLAY\n4:EXIT\n"); 
    	printf("\nEnter Your Choice:	"); 
        scanf("%d",&ch) ;
        
		switch(ch)
        {
			case 1:
                	printf("\nEnter total no.of elements:	");
                    scanf("%d",&m);
                    
					printf("Enter Elements : ");
                	for(i=1;i<=m;i++)
                    {
                        scanf("%d",&n);
                        create(n);
                    }
                    break;
            case 2:
					delet(); 
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


