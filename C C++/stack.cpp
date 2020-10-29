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
        MAX=100;
        top=-1;
    }

    int isempty()
    {
        if(top == -1)
        {
            return 1;
        }
        return 0;
    }

    int isfull()
    {
        if(top == MAX-1)
        {
            return 1;
        }
        return 0;
    }

    void push(int x)
    {
        if(isfull())
        {
            cout<<"LIST IS FULL"<<endl;
        }
        else
        {
            top++;
            data[top]=x;
        }
    }

    int pop()
    {
        int x=-1;
        if(isempty())
        {
            cout<<"LIST IS EMPTY"<<endl;
        }
        else
        {
            x=data[top];
            top--;
        }
        return x;
    }

    void display()
    {
        int i;
        if(isempty())
        {
            cout<<"LIST IS EMPTY"<<endl;
            return;
        }
        for(i=top;i>=0;i--)
        {
            cout<<data[i]<<endl;
        }
    }
};

int main()
{
    int p,q,r,t;
	stack s;
    cout<<"Enter 4 values";
    cin>>p>>q>>r>>t;
    s.push(p);
    s.push(q);
    s.push(r);
    s.push(t);
    s.display();
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    return 0;
}
