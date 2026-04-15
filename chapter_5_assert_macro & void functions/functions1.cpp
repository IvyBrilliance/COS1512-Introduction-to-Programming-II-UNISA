// for both FUNCTIONS: cos1511 and cos1512:
#include <iostream>
#include <string>
using namespace std;

// functions:

void greet() {
	string name;
	cout << "What is your name" << endl;
	cin >> name;
	cout << "Hello " << name << endl;
}

// function that adds 2 numbers:
int add(int num1, int num2) {
	int sum;
	sum = num1 + num2;
	return sum;
}



int main() {
	int num1, num2;


	greet();

	
	cout << "Please enter 2 numbers " << endl;
	cin >> num1 >> num2;
	cout << "your addition is : "<<  add(num1, num2) << endl;
	
	return 0;
}