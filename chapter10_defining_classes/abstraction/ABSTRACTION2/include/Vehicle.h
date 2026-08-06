#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>



class Vehicle
{
    public:
        Vehicle(std::string theName,  int theYear);  //  constructor
        virtual ~Vehicle(); // destuctor
        void setName(std::string newName);
        std::string getName() const;

    private:
        std::string name;
        int year;
};

#endif // VEHICLE_H
