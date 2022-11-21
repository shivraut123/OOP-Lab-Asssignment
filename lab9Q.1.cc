// 1.Create a class shape. Derive three classes from it; Circle, Square and Triangle. 
// Find area of each shape and display it, using virtual function.
#include<iostream>
using namespace std;
class shape
{
        public:
	virtual void area()=0;  // pure virtual function
};
class circle: public shape
{
   float r; //r=radius
   public:
    void area()
   {
       cout<<"\nEnter radius : ";
       cin>>r;
       cout<<"\nArea of circle : "<<(2.146*r*r);
   }
};
class rectangle: public shape
{
	int l,b; // l=length , b=bredth
	public:
   void area()
   {
       cout<<"\nEnter length : ";
       cin>>l;
       cout<<"\nEnter breadth : ";
       cin>>b;
       cout<<"\nArea of rectangle : "<<l*b;
   }
};
class triangle: public shape
{

	int h,b;
       float a;
	public:
       void area()
       {
   	    cout<<"\nEnter height : ";
            cin>>h;
            cout<<"\nEnter breadth : ";
            cin>>b;
            a=0.5*h*b;
            cout<<"\nArea of triangle : "<<a;
       }
};
int main()
{
   circle c; // object created
   c.area();
   rectangle r; // object created
   r.area();
   triangle t; // object created
   t.area();

   return(0);
}
