// Chapter 10: 
// 10.1:Structsures/ Structs
#include <iostream>
using namespace std;

// what is a structure: A structure is a varible that can hold
// values just like any other varible can hold values:

// A structure is a collection of smmaler values called 'memeber values'

// create a structure that stores details about renting out a CD.
// a cd-lending account:



struct BankAccount {
	string firstname, lastname;
	double balance;
};

void getData(BankAccount& account ); // get the data
void printData(BankAccount& account);

int main() {

	// instantiate:
	BankAccount FNB1;
	getData(FNB1);
	printData(FNB1);

	

	return 0;
}

void getData(BankAccount& account) {
	cout << "Enter your firstname.";
	cin >> account.firstname;
	cout << "Enter your lastname";
	cin >> account.lastname;
	cout << "How much do you want to deposit?";
	cin >> account.balance;
}

void printData(BankAccount& account) {
	cout << "Hello " << account.firstname << " your balance is " << account.balance << endl;
}

