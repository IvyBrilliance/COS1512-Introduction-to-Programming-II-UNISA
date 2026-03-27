// Lesson 30.1 classes
#include <iostream>
using namespace std;


class DayOfYear {
public:
	void output(); // member function
	int month;
	int day;

};

int main() {

	// instantiate:
	DayOfYear today, birthday;

	// today:
	cout << "Enter todays date: \n";
	cout << "Enter the month as a number: \n";
	cin >> today.month;
	cout << "Enter the day of the month: \n";
	cin >> today.day;

	// your birthday:
	cout << "Enter your birthday date: \n";
	cout << "Enter the month as a number: \n";
	cin >> birthday.month;
	cout << "Enter the day of the month: \n";
	cin >> birthday.day;

	if (today.month == birthday.month && today.day == birthday.day) {
		cout << "Happy birthday \n";
	}
	else {
		cout << "NOT your bday \n";
	}

	return 0;
}

