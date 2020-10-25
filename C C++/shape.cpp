#include <iostream> 
using namespace std;
 
class shape {
   protected:
      int width, height;
   public:
      shape(int w = 0,int h = 0)
      {
         width = w;
         height = h;
      }
     virtual int area()
      {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
class Rectangle: public shape{
   public:
      Rectangle( int w = 0, int h = 0)
      {
        shape(w, h); 
      }
      int area ()
      { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};
class Triangle: public shape{
   public:
      Triangle( int w = 0, int h = 0)
      {
        shape(w, h); 
      }
      int area ()
      { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};

int main( )
{
	int x,y;
	cout<<"Enter height: "<<endl;
	cin>>x;
	cout<<"Enter width: "<<endl;
	cin>>y;
   shape *shape;
   
   
   
   Rectangle rec(x,y);
   
   Triangle  tri(x,y);

   
   shape = &rec;

   shape->area();

 
   shape = &tri;
    
   shape->area();
   
   return 0;
}
