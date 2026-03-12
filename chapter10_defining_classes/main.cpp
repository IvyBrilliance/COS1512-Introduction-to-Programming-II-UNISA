// Program that demonstrates the very simple use of a class.
// DAY OF YEAR PROGRAM!
#include <iostream>

class DayOfYear {
public:
	void output();
	int month;
	int day;
};



int main() {
	DayOfYear today, birthday;

	std::cout << "Enter todays date: \n";
	std::cout << "Enter month as a number: ";
	std::cin >> today.month;

	std::cout << "Enter the day of the month: ";
	std::cin >> today.day;

	std::cout << "Enter your birthday : \n ";
	std::cout << "Enter the month as a number: ";
	std::cin >> birthday.month;
	std::cout << "Enter the day of the month";
	std::cin >> birthday.day;

	// show the outputs:
	// Output of todays date:
	std::cout << "Todays date is ";
	today.output();

	// Ouptut of your birthdays date:
	std::cout << "Your birthday is ";
	birthday.output();

	// check if today is the users birthday:
	if (today.month == birthday.month && today.day == birthday.day) {
		std::cout << "Happy birthday! \n";
	}
	else {
		std::cout << "Its not your birthday bro!";
	}

	return 0;
}

// the definitions of the member function:
void DayOfYear::output() {
	std::cout << "Month = " << month << ", day = " << day << std::endl;
}