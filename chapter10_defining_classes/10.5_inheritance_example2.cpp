// lesson: Inheritance, // access modifiers, // scope resolution operator
#include <iostream>
#include <string>
using namespace std;

// Base class:
class Person {
public:
	Person(string fname, string lname); // consructor
	void displayInfo();
	string getfirstame(); // getters / accessors
	string getlastname();
private:
	string firstname;
	string lastname;
};

// Derived class:
class Student : public Person {
public:
	Student(string fname, string lname, int lstudentId);
	void displayInfo();
private:
	int studentId;
};


int main() {
	Person person1("Daniel", "Jumpman");
	person1.displayInfo();

	Student student1("Mac", "Sinatra", 11122);
	student1.displayInfo();

	return 0;
}


Person::Person(string fname, string lname) {
	firstname = fname;
	lastname = lname;
}
void Person::displayInfo() {
	cout << "firtname : " << firstname << " and lastname: " << lastname << endl;
}

// derived class implementation:
Student::Student(string fname, string lname, int lstudentId) : Person(fname, lname) {
	studentId = lstudentId;
}

string Person::getfirstame() {
	return firstname;
}
string Person::getlastname() {
	return lastname;
}

void Student::displayInfo() {
	cout << "firtname : " << Person::getfirstame() << " and lastname: " << Person::getlastname() << " and student ID is " << studentId << endl;
}


