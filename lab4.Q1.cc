/* C++ program to find Area using Function Overloading  */

#include<iostream>
using namespace std;

int area(int,int);
float area(float);
float area(float,float);
int main()
{
        int l,b;
        float r,bs,ht;        
        cout<<"Enter length and breadth of rectangle:";
        cin>>l>>b;
        cout<<"Enter radius of circle:";
        cin>>r;
        cout<<"Enter base and height of triangle:";
        cin>>bs>>ht;

        cout<<"\nArea of rectangle is "<<area(l,b);
    cout<<"\nArea of circle is "<<area(r);
    cout<<"\nArea of triangle is "<<area(bs,ht);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);
}
float area(float bs,float ht)
{
   return((bs*ht)/2);
}
