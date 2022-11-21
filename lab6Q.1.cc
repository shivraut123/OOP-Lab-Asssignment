// Create a class complex which stores real and imaginary part of a complex number. Include all types of
// constructors and destructor. The destructor should display a message about the destructor being
// invoked. Create objects using different constructors and display them.
#include<iostream>
using namespace std;

    class complex{
        public:
        int realno;
        int imaginaryno;

        void input()
        {
            cout<<"Enter the real part of complex no";
            cin>>realno;
            cout<<"Enter the imaginary part of complex no";
            cin>>imaginaryno;
        }
        void display()
        {
            cout<<realno<<"+"<<imaginaryno<<"is"<<endl;

        }
    };
int main(){
    complex arr[5];
    int n;
    cout<<"Enter the size of complex numbers:\n";
    cin>>n;
    cout<<"Enter  complex numbers\n";
		for(int i=0; i<n; i++){
			cout<<"Complex number:  "<<(i+1)<<endl;
			arr[i].input();
        
		}
		cout<<"The entered complex numbers are\n";
		for(int i=0; i<n; i++){
			arr[i].display();
		}
    return 0;

}