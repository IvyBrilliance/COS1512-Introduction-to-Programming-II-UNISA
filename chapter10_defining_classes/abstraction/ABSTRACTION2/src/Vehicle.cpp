#include "Vehicle.h"

// constructor
Vehicle::Vehicle(std::string theName, int theYear)
{
    name = theName;
    year = theYear;
}

void Vehicle::setName(std::string newName){
    name = newName;
}

std::string Vehicle::getName()const{
    return name;
}

Vehicle::~Vehicle()
{
    //dtor
}
