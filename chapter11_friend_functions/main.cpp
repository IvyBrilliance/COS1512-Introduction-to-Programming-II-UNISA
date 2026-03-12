#include <iostream>

class DayOfYear {
public:
	DayOfYear(int theMonth, int theDay);
	DayOfYear(); // initializes the date to January first.

	void input();
	void output();
	int getMonth(); // return sthe month, 1 for January, 2 for February...etc.
	int getDay(); // returns the day of the month

private:
	void checkDate();
	int month;
	int day;
};

int main()
{
	

	return 0;
}
