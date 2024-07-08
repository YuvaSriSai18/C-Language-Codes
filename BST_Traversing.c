//WAP : Implement a recursive C program for traversing a binary tree in preorder, inorder, and postorder.


#include <stdio.h> 
#include <stdlib.h> 
struct Node
{
	int data;
	struct Node *right;
	struct Node *left;
}*temp,*root;

struct Node* insert(struct Node *, int); 
void inorder(struct Node*) ;
void preorder(struct Node* ) ; 
void postorder(struct Node* ) ;

void main()
{
	int ch,i,m,n; 
	while(1)
	{
		printf("\n**** MAIN MENU ****"); 
		printf("\n1:CREATE\n2:INORDER\n3:PREORDER\n4:POSTORDER\n5:EXIT\n");
		
		printf("\nEnter Your Choice:"); 
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
					printf("\n Enter total no of Elements:"); 
					scanf("%d",&m);
					
					printf("\n Enter elements:"); 
					for(i=1;i<=m;i++)
					{
						scanf("%d",&n); 
						root=insert(root,n);
					}
					break;
			case 2: 
					inorder(root); 
					break;
			case 3: 
					preorder(root);
 					break;
			case 4: 
					postorder(root);
					break;
			case 5: 
					exit(0);
		}
	}
}
struct Node* insert(struct Node *root, int n)
{
	temp=(struct Node*)malloc(sizeof(struct Node)); 
	if(root==NULL)
	{
		temp->data=n;
		temp->right=NULL; 
		temp->left=NULL; 
		
		return temp;
	}
	else if(n<root->data)
		root->left=insert(root->left,n); 
	else if(n>root->data)
		root->right=insert(root->right,n); 
	
	return root;
}
void inorder(struct Node *root)
{
	if(root!=NULL)
	{
		inorder(root->left); 
		printf(" %d ", root->data); 
		inorder(root->right);
	}
}
void preorder(struct Node *root)
{
	if(root!=NULL)
	{
		printf(" %d ", root->data); 
		preorder(root->left); 
		preorder(root->right);
	}
 
}
void postorder(struct Node *root)
{
	if(root!=NULL)
	{
		postorder(root->left); 
		postorder(root->right); 
		printf("%d",root->data);
	}
}
