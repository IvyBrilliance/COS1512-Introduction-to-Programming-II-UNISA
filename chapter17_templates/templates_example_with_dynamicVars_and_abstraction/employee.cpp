#include "employee.h"

// constructor initializer list:
Payroll::Employee::Employee(std::string  name, int age): name(name), age(age) {

}

std::string Payroll::Employee::getName(){
    return  this->name;
}

int Payroll::Employee::getAge() const {
    return this->age;
}

// set age:
void Payroll::Employee::setAge(int age){
    this->age = age;
}