/***
 * This Project Demonstrates how to call parent class's Functions from
 * with child's object.
 ***/

#include <iostream>
#include "ChildClass.h"

    int main()
    {
        ShahJugalR::ChildClass childClassObject;

        childClassObject.Function();

        std::cin.get();
    }
