#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void display(list<int> &list1)
{
	list<int>::iterator it;
	for(it = list1.begin() ;it != list1.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<"\n";
}

list<int> insert(list<int> &list1)
{
	int m,n;
	cout<<"Enter the position at which you want to insert element :"<<endl;
	cin>>m;
	cout<<"Enter the value you want to insert :"<<endl;
	cin>>n;
	list<int>::iterator itt = list1.begin();
	advance(itt,m - 1);
	list1.insert(itt,n);
	cout<<"Value Inserted!"<<endl;
	return list1;
}

void create(list<int> &list1)
{
	int x,i,y;
	cout<<"Enter the number of elements in the list :"<<endl;
	cin>>x;
	for(i=0;i<x;i++)
	{
		cout<<"Enter value :"<<endl;
		cin>>y;
		list1.push_back(y);
	}
}

int main()
{
	int i,x,y,ch;
	list<int> list1;
	
	while(ch != 8)
	{
	
		cout<<"\n1.Create\n2.Check Empty\n3.Insert\n4.Reverse\n5.Sort\n6.Unique\n7.Display\n8.Exit\n";
		cout<<"Enter choice :\n";
		cin>>ch;
		switch(ch)
		{
			case 1: create(list1);
				    break;
				    
			case 2: if(list1.empty())
						cout<<"List Empty!\n"<<endl;
					else
						cout<<"List not empty!\n"<<endl;
					break;
						
			case 3: list1 = insert(list1);
					break;
					
			case 4: list1.reverse();
					cout<<"List Reversed!\n";
					break;
					
			case 5: list1.sort();
					cout<<"List Sorted!\n";
					break;
					
			case 6: list1.unique();
					cout<<"List has been made unique!\n";
					break;
					
			case 7: display(list1);
					break;
					
			case 8: cout<<"Program Terminated!\n";
					break;
		}
	}
	return 0;
}




