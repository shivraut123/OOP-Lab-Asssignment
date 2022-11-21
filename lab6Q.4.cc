// WAP to demonstrate the order of call of constructors and destructors for a class.

#include <iostream>
 using namespace std;
class A {
    int i;
    public:
        A(int ii = 0) : i(ii)
        {
            cout << "A::A" << i << "() constructor "
                      <<endl;
        }
        ~A()
        {
            cout << "A::~A" << i << "() destructor "
                      <<endl;
        }
};
 
A a1(1);
 
int main()
{
    A a2(2);
}
