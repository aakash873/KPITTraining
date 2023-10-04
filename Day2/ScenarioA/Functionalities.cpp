#include "Functionalities.h"
#include "Vehicle.h"
#include "Type.h"

void CreateObjects(Vehicle *container[3])
{
    //conatiner's 0 index now holds the address of this object on the heap
    container[0] = new Vehicle("v101", "Maruti", Type::CAR, 870000.0f);
    container[1] = new Vehicle("v102", "Honda", Type::CAR, 970000.0f);
    container[2] = new Vehicle("v103", "Toyota", Type::CAR, 1270000.0f);
    //std::cout<<container[0];
}

/*
  loop over all locations of the array
  For each location's pointer
  access _price attribute

  add it total

  divide total by 3 and return

 */
float AveragePrice(Vehicle* container[3])
{
    float total = 0.0f;

    for(int i=0;i<3;i++){
        //total is previous total and price value taken from address at i position
       total += ( container[i] )->price();     // 1 jump is possible by -> or *

    }

    return total/3;
}


