// HAVE TO PRACTICE STEAMS FIRST...

#include <iostream>
using namespace std;

class Money {
public:
	friend Money add(const Money& amount, const Money& amount2);
	friend bool equal(const Money& amount1, const Money& amount2);
	Money(long dollars, int cents);
	Money(long dollars); // initializes to cents =0;
	Money(); // initializes to 0
	double getValue() const;
	void input(istream& ins);
	void output(ostream& outs) const;
private:
	long allCent;
};

int main() {


	return 0;
}