#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct noddy
{
	int dataa;
	struct noddy *agla;
};
struct mode
{
	int donne;
	struct mode *suivant;
};


struct node *create(struct node *,int );
void display(struct node *);
struct noddy *create1(struct noddy *,int );
void display1(struct noddy *);
void display2(struct mode *);
struct mode *Union(struct node *,struct noddy *,struct mode *);


int main()
{
		
		int n,m,i,data,dataa;
		struct node *first=NULL;
		struct noddy *un=NULL;
		struct mode *premiere=NULL;
		
		cout<<"Enter the number of entries in the 1st linked list"<<endl;
		cin>>n;;
		
	
		
		cout<<"\nEnter the data of 1st Linked List"<<endl;
		for(i=0;i<n;i++)
		{
			cin>>data;
			first=create(first,data);
		}
		cout<<"The 1st linked list is: \n";
		display(first);
		
		cout<<"\nEnter the number of entries in the 2nd linked list\n";
		cin>>m;
		
		cout<<"Enter the data of 2nd Linked List\n";
		for(i=0;i<m;i++)
		{
			cin>>dataa;
			un=create1(un,dataa);
		}
		
		cout<<"The 2nd linked list is: \n";
		display1(un);
		
		cout<<"\nThe union of the given 2 linked lists is: \n";
		premiere = Union(first,un,premiere);
		display2(premiere);
		
}

struct node *create(struct node *first,int data)
{
	struct node *temp;
	if(first==NULL)
	{
		first=(struct node *)malloc(sizeof(struct node *));
		
		first->data=data;
		first->next=NULL;
	}
	
	else
	{
		for(temp=first;temp->next!=NULL;temp=temp->next);
		temp->next=(struct node *)malloc(sizeof(struct node *));
		
		temp=temp->next;
		temp->data=data;
		temp->next=NULL;
	}
	return(first);
}

struct noddy *create1(struct noddy *un,int dataa)
{
	struct noddy *temp;
	if(un==NULL)
	{
		un=(struct noddy *)malloc(sizeof(struct noddy *));
		
		un->dataa=dataa;
		un->agla=NULL;
	}
	
	else
	{
		for(temp=un;temp->agla!=NULL;temp=temp->agla);
		temp->agla=(struct noddy *)malloc(sizeof(struct noddy *));
		
		temp=temp->agla;
		temp->dataa=dataa;
		temp->agla=NULL;
	}
	return(un);
}


void display(struct node *first)
{
	struct node *temp;
	for(temp=first;temp!=NULL;temp=temp->next)
	{
		cout<<temp->data;
		cout<<" ";
	}
}

void display1(struct noddy *un)
{
	struct noddy *temp;
	for(temp=un;temp!=NULL;temp=temp->agla)
	{
		cout<<temp->dataa;
		cout<<" ";
	}
}

void display2(struct mode *premiere)
{
	struct mode *temp;
	for(temp=premiere;temp!=NULL;temp=temp->suivant)
	{
		cout<<temp->donne;
		cout<<" ";
	}
}





struct mode *Union(struct node *first,struct noddy *un,struct mode *premiere)
{
	struct node *temp=NULL;
	struct noddy *temp1=NULL;
	struct mode *temp2=NULL;
	
	temp = first;
	temp1 = un;
	temp2 = premiere;
	
	while(temp->next!=NULL)
	{
		temp2->donne = temp->data;
		//cout<<temp2->donne<<" ";
		temp = temp->next;
		temp2 = temp2->suivant;
	}
	
	temp = first;
	
	while(temp1->agla!=NULL)
	{
		if(temp1->dataa == temp->data)
		{
			temp1 = temp1->agla;
			temp = temp->next;
		}
		else if(temp1->dataa!=temp->data && temp1->dataa < temp->data)
		{
			temp2->donne = temp1->dataa;
			//cout<<temp2->donne<<" ";
			temp1 = temp1->agla;
			temp2 = temp2->suivant;
		}
		else if(temp1->dataa!=temp->data && temp1->dataa > temp->data)
		{
			temp2->donne = temp1->dataa;
			//cout<<temp2->donne<<" ";
			if(temp->next!=NULL)
			temp = temp->next;
			temp1 = temp1->agla;
			temp2 = temp2->suivant; 
		}
		
	}
	return(premiere);
}
