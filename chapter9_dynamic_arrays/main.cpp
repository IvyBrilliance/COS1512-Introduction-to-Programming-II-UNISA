// dynamic array::


// first create lesson on arrays:


#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {

	// pointer:
	int* p;
	int pval = 3;
	p = &pval; // reference operator
	*p = 6;


	cout << *p << endl; // derefencing operator
	cout << pval << endl;

	// new : used to create variables that have no identifires to serve as their names:
	// varibles created using the new operator are called dynamic variables coz 
	// they are created adn destroyed while the program ins running.
	int* p1;
	p1 = new int;

	// deleting dynamic memory using delete :
	delete p; // after this, the value of p is undefined and p should be treated lieke 
	// an uniitiized varible.

	// TYPEDEF:
	// explaining typedef:
	// a dynamic arry is an array whos size is not specified when you write the program...



	return 0;
}