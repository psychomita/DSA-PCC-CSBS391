#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node  *left;
	struct node  *right;
}tree;
void preorder(tree *root)
{
	if(root!=NULL)
	{
		printf("\n %d",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(tree *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("\n %d",root->data);
		inorder(root->right);
	}
}
void postorder(tree *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("\n %d",root->data);
	}
}
tree * insert(tree *root, tree *temp) 
{
	if(root==NULL)
	 root=temp;
	else if(temp->data<=root->data)
	 root->left=insert(root->left, temp);
	else 
	 root->right=insert(root->right, temp);
	 
	return root;
}
int main()
{
	int ch;
	tree *root, *temp;
	while(1)
	{
		printf("\n\n 1 for Insert ");
		printf("\n 2 for Display ");
		printf("\n 3 for Exit ");
		printf("\n Enter choice ");
		scanf("%d",&ch);
		
		
		switch(ch)
		{
			case 1:
			temp=(tree*)malloc(sizeof(tree));
			printf("\n Enter the data ");
			scanf("%d",&temp->data);
			temp->left=NULL;
			temp->right=NULL;
			
			root=insert(root,temp);
			break;
			
			case 2:
			printf("\n Preorder : ");
			preorder(root);
			printf("\n Inorder: ");
			inorder(root);
			printf("\n Postorder  : ");
			postorder(root);
			break;
			
			case 3:
			exit(1);
			
			default:
			printf("\n Wrong choice ");
		}
	}
}
