#include<iostream>
using namespace std;
class stack
{
	int data[10];
	int top;
	public:
		stack()
		{
			top=-1;
		}
		void push(int x);
		void pop();
		int full();
	    int empty();
};
int main()
{
	stack s;
	int x;
	cout<<"enter element in array to be pushed"<<endl;
	cin>>x;
	s.push(x);
	cout<<"enter element in array to be pushed"<<endl;
	cin>>x;
	s.push(x);
	s.pop();
	s.pop();
	
}
void stack::push(int x)
{
	if(!full())
	{
		top++;
		data[top]=x;
	}
	else
	{
		cout<<"stack is full"<<endl;
	}
}
int stack::full()
{
	if(top==10)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void stack::pop()
{
	if(!empty())
	{
		cout<<data[top]<<endl;
		top--;
	}
	else
	{
		cout<<"stack is empty"<<endl;
	}
}
int stack::empty()
{
	if(top==-1)
	{
		return 1;
	}
	return 0;
}
