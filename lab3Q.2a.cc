#include <iostream>
using namespace std;
// function definition to swap numbers
void swap(int number1, int number2) {
    int temp;
    temp = number1;
    number1 = number2;
    number2 = temp;
    cout << "a = " << number1 << endl;
    cout << "b = " << number2 << endl;
}
int main() {
    // initialize variables
    int a = 1, b = 2;
    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    // call function by passing by values
    cout << "\nAfter swapping" << endl;
    swap(a, b);
    return 0;
}