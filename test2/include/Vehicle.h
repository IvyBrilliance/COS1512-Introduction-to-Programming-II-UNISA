#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>


class Vehicle
{
    public:
        Vehicle(std::string name, int year);
        virtual ~Vehicle();

    protected:

    private:
        std::string name;
        int  year;
};

#endif // VEHICLE_H
