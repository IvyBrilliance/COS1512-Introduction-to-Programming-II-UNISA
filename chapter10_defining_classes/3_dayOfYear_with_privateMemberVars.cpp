// lesson 2: classes:
// private members:
// mutators and accessors:
// check validity of date:
#include <iostream>
using namespace std;

class DayOfYear {
public:
	void output();
	void setDate(int newMonth,int newDay); // setter
	int getMonth(); // getter 
private:
	int month;
	int day;
};

int main() {
	
	// instantiate:
	DayOfYear myBirthday;
	myBirthday.setDate(4, 10);
	myBirthday.output();

	cout << myBirthday.getMonth() << endl;
	
	
	return 0;
}

// implementation:
// :: scope resolution operators...
void DayOfYear::setDate(int newMonth, int newDay) {
	month = newMonth;
	day = newDay;
}

void DayOfYear::output() {
	cout << "Date is, month : " << month << ", day is : " << day << endl;
}

int DayOfYear::getMonth() {
	return month;
}

