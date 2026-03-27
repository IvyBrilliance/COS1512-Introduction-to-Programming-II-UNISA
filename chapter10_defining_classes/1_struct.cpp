#include <iostream>

// structures:

// a structure variable can hold values just like any other variable can hold values.
// a structure value is a collection of smaller values called member values.
//

struct CDAccount {
	double balance;
	double interestRate;
	int term; // months until maturity
};

void getData(CDAccount& theAccount); // gets the data



int main()
{
	// instatiate the object:
	CDAccount account;
	getData(account);

	// do our calculation:
	double rateFraction, interest;
	rateFraction = account.interestRate / 100.0;
	interest = account.balance * rateFraction * (account.term / 12.0);
	std::cout.setf(std::ios::fixed);
	        std::cout.setf(std::ios::showpoint);
	        std::cout.precision(2);
	        std::cout << "When your CD matures in "
		<< account.term << " months,\n"
		<< "it will have a balance of $"
		 << account.balance << std::endl;
	return 0;
}

void getData(CDAccount &theAccount) {
	std::cout << "Enter account balance: R";
	std::cin >> theAccount.balance;
	std::cout << "Enter account interest rate: ";
	std::cin >> theAccount.interestRate;
	std::cout << "Enter the number of months until maturity \n" << "(must be 12 or fewer):";
	std::cin >> theAccount.term;
}


// additional notes and considerables:

// use hierarchical structures: structures within sturctures:
struct Date {
	int month;
	int day;
	int year;
};

struct PersonInfo {
	double height;
	int weight;
	Date birthday;
};