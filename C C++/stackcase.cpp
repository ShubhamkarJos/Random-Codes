#include<iostream>
using namespace std;

class stack
{
	int MAX;
	int data[100];
	int top;
	public:
		stack()
		{
			MAX = 100;
			top = -1;
		}
		
		int isempty()
		{
			if(top == -1)
			{
				
				return 1;
			}
			else
			return 0;
		}
		
		int isfull()
		{
			if(top == MAX-1)
			{
				return 1;
			}
			else 
			return 0;
		}
		
		void push(int x)
		{
			if(isfull())
			{
				cout<<"Stack is Full\n";
			}
				data[++top] = x;
				
			
		}
		
		int pop()
		{
			int x = -1;
			if(isempty())
			{
				cout<<"\nStack is Empty\n";
			}
			else
			{
				cout<<"\nThe top element is : \n";
				x = data[top--];
				cout<<x<<endl<<endl;
			}
			return x;
		}
		
		void display()
		{
			int i;
			if(isempty())
			{
			}
			cout<<"\nThe stack is :\n";
			for(i=top;i>=0;i--)
			{
				
				cout<<data[i]<<endl;
			}
			cout<<endl;
		}
};
		
int main()
{
	int p,q;
	stack s;
	do
	{
	
		cout<<"\n1) Push\n2) Pop\n3) Exit\n";
		cout<<"Enter choice : ";
		cin>>p;
	

		switch(p)
		{
			case 1:
				cout<<"\nEnter value : ";
				cin>>q;
				s.push(q);
				s.display();
				break;
			
			case 2:
				s.pop();
				break;
			
			case 3:
				cout<<"Program terminated!\n";
				break;
		}
	
	}while(p != 3);
}
