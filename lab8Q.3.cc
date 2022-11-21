// . Create a class which a complex number. Add two objects and display the resultant
// // object. Overload the ++ (post and pre) operator for the class
#include<iostream>
using namespace std;

class Complex{
 private:
    int real, img;

 public:
 Complex(){}
    Complex(int r, int i){
        real = r; img = i;
    }

    void print(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    void operator ++(){
        ++real;
    }

    //operator overlaoading
    Complex operator +(Complex c){
        Complex temp;
        temp.real = real+c.real;
        temp.img = img+c.img;
        return temp;
    }
};

int main(){
    Complex c1(5, 4);
    Complex c2(2, 5);
    Complex c3;
    c3 = c1 + c2;//c3 = c1.add(c2);
    //cout<<c3<<endl;
    c3.print();
    ++c3;
    c3.print();
}

