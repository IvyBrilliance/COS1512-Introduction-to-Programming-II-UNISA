#include <iostream>
#include <fstream>


class DayOfYear{

public:

private:
};

int main()
{

    ifstream inStream; // input stream
    ofstream outStream; // output stream

    // open the file:
    inStream.open("file.txt");
    if(inStream.fail()){
        std::cout << "Input file opening has failed \n";
        exit(1);
    }else{
        outStream("file.txt");
    }

    return 0;
}
