
#include<iostream>
#include<string.h>

using namespace std;
class e_handling
{
    
    string city;
    char vehicle;
    
    public:
    friend istream &operator >>(istream &indata,e_handling &e)
    {
        cout<<"\n\n Enter the city of the user :";
        indata>>e.city;
        cout<<"\n Does the user have a 4-Wheeler (Y/N)";
        indata>>e.vehicle;
        return(indata);
    }
    friend ostream &operator <<(ostream &outdata,e_handling &e)
    {
    	
        try
        {
            if(e.city!="Pune" && e.city!="Mumbai" && e.city!="Chennai" && e.city!="Bangalore")
            throw(2);
            if(e.vehicle=='N' || e.vehicle=='n')
            throw(1);

        }
            catch(int a)
            {
                switch(a)
                {
                    case 2:
                        outdata<<"\n Exception! User should either be from Pune or Mumbai or Bangalore or Chennai.";
                    break;
                    
					case 1:
                        outdata<<"\n Exception! User should have 4-wheeler.";
                    break;
                }
            }
            return(outdata);
        }

};
int main()
{
    int choice;
    e_handling h;
   
    do
    {
        cout<<"\n\n1.Insert data\n2.Display Data\n3.Exit\n";
        cout<<"Enter your choice \n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cin>>h;
            break;
            case 2:
                cout<<h;
            break;
            case 3:
            break;
        default:
            cout<<"Enter correct choice\n";
        }
    }while(choice!=3);
    
	return 0;
}


