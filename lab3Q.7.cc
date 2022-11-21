//Write a C++ program to dynamically allocate an array of 10 elements and print the sum.

#include<iostream>
using namespace std;
int main() {
	int i, n,sum=0;
	cout << "Enter the number of items:" << "\n";
	cin >>n;
	int *arr = new int(n);
	cout << "Enter " << n << " items" << endl;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "You entered: ";
	for (i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	for(i=0;i<n;i++){
		sum+=*(arr + i);
	}
	printf("sum of array element is : %d\n",sum);
	return 0;
}

