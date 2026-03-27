// Lesson 30.1 classes
#include <iostream>
using namespace std;


class DayOfYear {
public:
	void output(); // member function
	void input();

	// setter: mutator
	void set(int newMonth, int newDay);
	
	// getters: accessor
	int getMonth();
	int getDay();

private:
	void checkdate(); // birthday wisher
	int month;
	int day;

};

// main function ----------------------------
int main() {

	// instantiate:
	DayOfYear today;
	DayOfYear birthday;

	/*today.input();

	today.output();

	birthday.input();
	birthday.output();*/

	today.set(1,1);
	cout << "The month is : "<<  today.getMonth() << ". The day is " << today.getDay() << endl;

	return 0;
}

// we use the scope resolution opearator: 
void DayOfYear::input() {
	cout << "Enter date: \n";
	cout << "Enter the month as a number: \n";
	cin >> month;
	cout << "Enter the day of the month: \n";
	cin >> day;
	checkdate(); // check the validity of the date before user proceeds!
	
}

void DayOfYear::output() {
	cout << "The date is : Month: " << month << " & the day is :" << day << endl;
}

void DayOfYear::set(int newMonth, int newDay) {
	month = newMonth;
	day = newDay;
}

void DayOfYear::checkdate() {
	// check the validity of the date and display error!
	if (month > 12 || month < 1 || day < 1 || day > 31) {
		cout << "Invalid date! \n" ;
		exit(1); // exit out of the program!
	}
}

// getter: 
int DayOfYear::getMonth() {
	return month;
}
int DayOfYear::getDay() {
	return day;
}