#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *insert(struct node *,int );
void display(struct node *);
struct node*delnode(struct node *first,int value);
int main()
{
	int ch,t=0,data,value;
	struct node *first=NULL;
	
	do 
	{
		cout<<"\n1.Insert"<<endl<<"2.Delete"<<endl<<"3.Display"<<endl<<"4.Exit"<<endl;
		cout<<"\nEnter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"\n\nEnter Data"<<endl;
					cin>>value;
					first=insert(first,value);
					t++;
					break;
					
			case 2: if(first!=NULL)
					{
						cout<<"\nEnter the position of the element to be deleted"<<endl;
						cin>>value;
						first=delnode(first,value);
					}
					else
					cout<<"\n\nLinked List empty\n\n"<<endl;
					break;
					
			case 3: cout<<"\nThe given linked list is as follows:\n"<<endl;
					display(first);
					cout<<"\n";
					break;
					
			case 4: cout<<"\n\t\t\t\tProcess Terminated"<<endl;
					break;
		}
	}while(ch!=4);
}

void display(struct node *first)
{
	struct node *p;
	p=first;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}

struct node *insert(struct node *first,int value)
{
	struct node *newn,*temp,*t;
	int n,i=0;
	newn=new node;
	newn->data=value;
	newn->next=NULL;
	
	if(first==NULL)
	first=newn;
	
	else if(newn->data < first->data)
	{
		newn->next=first;
		first=newn;
	}
	
	else
	{
		
		temp=first;
		while((temp!=NULL)&&(newn->data > temp->data))
		{
			temp=temp->next;
			i++;
		}
		t=first;
		for(n=0;n<i-1;n++)
		{
			t=t->next;
		}
		//cout<<t->data;		
		t->next=newn;
		newn->next=temp;
		
	}
	return first;
}

struct node *delnode(struct node *first,int value)
{
	struct node *temp,*t;int i=0;
	
	if(value==1)
	 {
	 	temp=first;
	 	first=first->next;
	 	temp->next=NULL;
	 	return first;
	 	delete(temp);
		
	 }
	 
	else
	{
		temp=first;
		while(i<value-1)
		{
			t=temp;
			temp=temp->next;
			i++;
		}
		t->next=temp->next;
		//temp->next=NULL;
		delete(temp);
		return first;
	}
}

