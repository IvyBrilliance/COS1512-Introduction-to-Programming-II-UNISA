#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>

class Vehicle
{
    public:
        Vehicle(std::string name, int year); // creates the class
        virtual ~Vehicle(); // destructor- destroys.
        void setName(std::string newName);
        std::string getName() const;

    private:
        std::string name;
        int year;
};

#endif // VEHICLE_H
