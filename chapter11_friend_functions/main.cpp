#include <iostream>
#include <string>
using namespace std;

class DayOfYear {
public:
	DayOfYear(int theMonth, int theDay);
	DayOfYear(); // initializes the date to the first of the year.
	int getMonth();
	int getDay();
	friend bool equal(DayOfYear date1, DayOfYear date2);
private:
	//void checkDate();
	int month;
	int day;
};

// equal function:  old function that needed getters:
//bool equal(DayOfYear date1, DayOfYear date2) {
	//return (date1.getMonth() == date2.getMonth() && date1.getDay() == date2.getDay());
//}


int main() {

	DayOfYear birthday(3,1);
	DayOfYear today(3,1);

	cout << "Is it my birthday? " << equal(birthday, today) << endl;

	cout << "what is the month of my birhday?  " << birthday.getMonth() << endl;

	return 0;
}

// constructors:
DayOfYear::DayOfYear(): month(0), day(0) {}
DayOfYear::DayOfYear(int theMonth, int theDay) : month(theMonth), day(theDay) {}

// the new equal function: friend function:
bool equal(DayOfYear date1, DayOfYear date2) {
	return (date1.month == date2.month && date1.day == date2.day);
}

// getters:
int DayOfYear::getMonth() { return month; }
int DayOfYear::getDay() { return day; }









