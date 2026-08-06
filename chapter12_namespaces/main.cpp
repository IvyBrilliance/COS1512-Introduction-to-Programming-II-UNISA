#include <iostream>
#include "Vehicle.h"

namespace Call{
    void greetings(){
        std::cout  << "Hello  call" << '\n';
    }
}

namespace Water{
    void greetings(){
        std::cout  << "Hello  water" << '\n';
    }
}

int main()
{

    Call::greetings();
    Water::greetings();

    Vehicle ford = Vehicle("ford", 2020);


    return 0;
}
