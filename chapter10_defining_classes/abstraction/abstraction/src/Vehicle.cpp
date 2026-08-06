#include "Vehicle.h"

Vehicle::Vehicle(std::string name, int year)
{
    std::cout << "the constructor has been  called" << std::endl;
}

// set name:
void Vehicle::setName(std::string newName){
   a name = newName;
}


Vehicle::~Vehicle()
{
    //dtor
}
