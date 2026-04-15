// functions:
#include <iostream>
#include <string>
using namespace std;

// passing by value:
int add(int num1, int num2) {
	int sum;
	sum = num1 + num2;
	return sum;
}

// passing by reference:
int addByRef( int & num1, int & num2) {
	int sum;
	sum = num1 + num2;

	num1 = 3000;
	return sum;
}

int main() {

	int mynumber1 = 10;
	int mynumber2 = 100;

	cout << addByRef(mynumber1, mynumber2) << endl;

	cout << "myNumber1 is : " << mynumber1 << endl;
	cout << "myNumber2 is : " << mynumber2 << endl;

	return 0;
}