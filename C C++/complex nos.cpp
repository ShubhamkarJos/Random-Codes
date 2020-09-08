#include<iostream>
using namespace std;

class complex
{
	int real,imag;
	public:
		complex(int r=0,int i=0)
		{
			real=r;
			imag=i;
			
		}
		
		complex operator + (complex const &obj)
		{
			complex sum;
			sum.real = real + obj.real;
			sum.imag = imag + obj.imag;
			return sum;
		}
		
		void printsum()
		{
			cout<<real<<" + "<<imag<<"i"<<endl;
		}
		
		complex operator * (complex const &obj1)
		{
			complex mul;
			mul.real = real*obj1.real;
			mul.imag = imag*obj1.imag;
			return mul;
		}
		
		void printmul()
		{
			
		} 
};

int main()
{
	int a,b,c,d;
	cout<<"Enter real part of the 1st number"<<endl;
	cin>>a;
	cout<<"Enter imaginary part of the 1st number"<<endl;
	cin>>b;
	cout<<"Enter real part of the 2nd number"<<endl;
	cin>>c;
	cout<<"Enter imaginary part of the 2nd number"<<endl;
	cin>>d;
	
	complex c1(a,b),c2(c,d);
	complex c3 = c1 + c2;
	c3.printsum();
	complex c4 = c1*c2;
	c4.printmul();
}

