// lesson: ADT: classes -- CONTRSTRUCORS
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	Person(); // constructor without params
	Person(string myfirstname, string mylastname); // consructor
	void displayName();
	void setName(string newfirstname, string newlastname); // setter
private:
	string firstname;
	string lastname;
};

int main() {

	// instantiate:
	Person Daniel("Daniel", "Jumpman");
	Daniel.displayName();
	Daniel.setName("Frank", "Samuels");
	Daniel.displayName();
	

	return 0;
}

// implementation:
Person::Person() {

}
Person::Person(string myfirstname, string mylastname) {
	firstname = myfirstname;
	lastname = mylastname;
}

void Person::displayName() {
	cout << "Your firstname is : " << firstname << " and your lastname is : " << lastname << endl;
}

void Person::setName(string newfirstname, string newlastname) {
	firstname = newfirstname;
	lastname = newlastname;
}

