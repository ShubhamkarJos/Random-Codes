#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private:
		long long int contact;
		char license[50];
	public:
		char *name;
	    int rollno;
		char year[5];
		char div;
		char bloodgroup[5];	
		//void scan();
		//void print();
		friend void scan(student *p);
		void print(student *p);
		
		static void del()
		{
			cout<<"Would you like to delete this information? Yes/No"<<endl;
			
			char d[10];
			cin>>d;
			
			if(d=="Yes")
			{
				delete name;
			}
			else if(d=="No")
			{
				cout<<"No information will be deleted"<<endl;
			}
			else
			{
				cout<<"Invalid Response"<<endl;
			}
		}
};
void scan(student *p);
//inline void print(student *p);
int main()
{

	student s;
	scan(&s);
	cout<<"------------------------------------------------------------------------------"<<endl;
	cout<<"                               Student Profile                                "<<endl;
	cout<<"------------------------------------------------------------------------------"<<endl;
	s.print(&s);
	student::del();
	
}
void scan(student *p)
{
	cout<<"Enter the name of the Student"<<endl;
	//cin.ignore();
	p->name = new char[50];
	cin.getline(p->name,49);
	cout<<"Enter Year"<<endl;
	cin>>p->year;
	cout<<"Enter Division"<<endl;
	cin>>p->div;
	cout<<"Enter Blood Group "<<endl;
	cin.ignore();
	cin.getline(p->bloodgroup,4);
	cout<<"Enter Mobile Number"<<endl;
	cin>>p->contact;
	cout<<"Enter driving license number\n";
	cin.ignore();
	cin.getline(p->license,49);
	cout<<"Enter Roll Number"<<endl;
	cin>>p->rollno;
	//cin.ignore();
}
inline void student :: print(student *p)
{
	cout<<"Name: "<<p->name<<endl;
	cout<<"Year: "<<p->year<<endl;
	cout<<"Division: "<<p->div<<endl;
	cout<<"BloodGroup: "<<p->bloodgroup<<endl;
	cout<<"Contact No.: "<<p->contact<<endl;
	cout<<"Liscense No.: "<<p->license<<endl;
	cout<<"Roll No.: "<<p->rollno<<endl;
}


