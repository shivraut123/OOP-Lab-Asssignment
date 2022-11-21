#include<iostream>

using namespace std;

class A
{
public: 
int x,y;
};



int main()
{
//Pointer to member variable x of class A
int A::* p1 = &A :: x;

//Pointer to member variable y of class A
int A::* p2 = &A :: y;

//Creating an object of class A
A ob;

ob.*p1 = 10;
ob.*p2 = 10;

cout<<"The value of x is : " << ob.*p1 << "\n";
cout<<"The value ot y is : " << ob.*p2 << "\n"; 
}