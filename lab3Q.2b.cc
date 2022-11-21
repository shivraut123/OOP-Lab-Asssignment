#include <iostream>
using namespace std;
// function definition to swap numbers
void swap(int* number1, int* number2) {
    int temp;
    temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}
int main() {
    // initialize variables
    int a = 1, b = 2;
    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    // call function by passing variable addresses
    swap(&a, &b);
    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}