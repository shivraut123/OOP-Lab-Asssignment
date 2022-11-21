// 4.Create a class which stores name, roll no and total marks for a
// student.Input the data for a student and display it.

#include<iostream>
using namespace std;
class student
{
private:
int rollno;
string name;
int mark;
public:
void getdetails()
{
cout<<"enter your name,rollno,mark"<<endl;
cin>>name>>rollno>>mark;
}
void displaydetails()
{
cout<<"name "<<name <<endl;
cout<<"rollno "<<rollno <<endl;
cout<<"mark "<<mark <<endl;
}
};
int main()
{
student s1;
s1.getdetails();
s1.displaydetails();
return 0;
}