#include "Employee.h"
#include <iostream>

int main()
{
    std::cout << "hello" << std::endl;
    Payroll::Employee Kim("kim");
    Payroll::Employee *Dan = new Payroll::Employee("Dan");

    std::cout << Dan->getName() << std::endl;
}
