#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct bstnode
{
	int data;
	struct bstnode *left;
	struct bstnode *right;
}node;
void display(node *root);
node *create(node *root);
node *search(node *root,int y);
void postorder(node *root);
void preorder(node *root);
void inorder(node *root);
int main()
{
	node *root=NULL;
	char str[50];
	int x,y,ans;
	printf("enter your choice\n");
	while(1)
	{
		printf("enter 1.create\n 2.search\n 3.preorder\n 4.inorder\n 5.postorder\n or enter STOP to stop\n");
		fflush(stdin);
		gets(str);
		if(strcmp(str,"STOP")==0)
		{
			return;
		}
		x=atoi(str);
		switch(x)
		{
			case 1:
				root=create(root);
				break;
			case 2:
				printf("enter number to be searched\n");
				scanf("%d",&y);
				search(root,y);
				break;
			case 3:	preorder(root);
					break;
			case 4: inorder(root);
					break;
			case 5: postorder(root);
					break;
			default :
				;
		}
	}
}
node *create(node *root)
{
	node *p;
	int y;
	char str[50];
	printf("enter number\n");
	scanf("%d",&y);
	root=(node*)malloc(sizeof(node));
	root->data=y;
	root->left=NULL;
	root->right=NULL;
	p=root;
	while(1)
	{
	  	printf("\nenter data to be entered or enter STOP to stop\n");
			fflush(stdin);
			gets(str);
			if(strcmp(str,"STOP")==0)
			{
				break;
			}
			y=atoi(str);
			if(root->data<=y)
			{
				if(p->data<=y)
				{	
				p->right=(node*)malloc(sizeof(node));
				p->right->data=y;
				p->right->left=NULL;
				p->right->right=NULL;
				p=p->right;
				}
			}
			else
			{
				if(p->data>=y)
				{
				p->left=(node*)malloc(sizeof(node));
				p->left->data=y;
				p->left->left=NULL;
				p->left->right=NULL;
				p=p->left;
				}
			}
			
	}
	return root;	
}
node *search(node *root,int y)
{
	node *p;
	p=root;
	while(root->left!=NULL)
	{
		if(root->left->data==y)
		{
			printf("Number found\n");
			return root;
		}
		root=root->left;
	}
	while(p->right!=NULL)
	{
		if(p->right->data==y)
		{
			printf("Number found\n");
			return root;
		}
		p=p->right;
	}
}
void preorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	printf("%d ->",root->data);
	preorder(root->left);
	preorder(root->right);
}
void inorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	printf("%d ->",root->data);
	inorder(root->right);
}
void postorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d ->",root->data);
}
