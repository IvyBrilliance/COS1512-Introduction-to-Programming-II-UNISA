// functions:
#include <iostream>
#include <fstream>
//#include <cstdlib>
using namespace std;

int main() {

	// declarations:
	ifstream inStream;
	ofstream outStream;

	// open the files:
	inStream.open("infile.txt");
	if (inStream.fail()) {
		cout << "Input file opening failed. \n";
		exit(1);
	}
	outStream.open("outfile.txt");

	// vars:
	int first, second, third;
	inStream >> first >> second >> third;
	outStream << "The sume of the first three \n"
		<< "nu;mbers in the infile.txt \n"
		<< "is : " << (first + second + third)
		<< endl;
	inStream.close();
	outStream.close();
	

	return 0;
}