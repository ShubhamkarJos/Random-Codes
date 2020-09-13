#include<iostream>
using namespace std;
struct node *insert(struct node *  );
void display(struct node *);

struct node 
{
	int data;
	struct node *next,*prev;
};
struct node *insert(struct node *head)
{
	struct node *temp,*new_node;
	int i=0,j;
	
	temp=head;
	new_node= new node;
	new_node->next=NULL;
	new_node->prev=NULL;
	cout<<"Enter Data "<<endl;
	cin>>new_node->data;
		
	if(head==NULL)
	{
		
		//new_node->next=temp;
		//new_node->prev=;
		head=new_node;	
	}
	
	else
	{
		temp=head;
		cout<<"Enter Position"<<endl;
		cin>>j;
		for(i=1;i<j-1;i++,temp=temp->next);
		if(temp->next!=NULL)
		{
		
			while(i<j-1)
			{
				temp=temp->next;
				i++;
			}
			new_node->next=temp->next;
			new_node->prev=temp;
			temp->next=new_node;
			//temp=new_node->next;
			temp->prev=new_node;
		}
		else
		{
			/*while(temp->next!=NULL)
			{
				temp=temp->next;
			}*/
			temp->next=new_node;
			new_node->prev=temp;
			new_node->next=NULL;
		}
	
	}
	
	return head;
}
void display(struct node *head)
{
	struct node *temp;
	for(temp=head;temp!=NULL;temp=temp->next)
	{
		cout<<temp->data;
	}
}

int main()
{
	struct node *head=NULL;
	int data,p;
	do
	{
	
	head=insert(head);
	display(head);
	cout<<"Press 0 to continue"<<endl<<"Press 1 to exit"<<endl;
	cin>>p;
	
	}while(p!=1);
}


