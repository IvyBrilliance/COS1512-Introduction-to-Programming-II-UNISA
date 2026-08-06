#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

namespace Payroll {
class Employee {
private:
    std::string name;
    int age;

public:

    Employee(std::string name, int age);

    // getter:
    std::string getName();
    int getAge() const;

    void setAge(int age) ;

};
}

#endif

