
/*
A function to create the 3 objects on the heap
*/

// can every single object do this? OR should a single object be able to do this?

#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Vehicle.h"


/*
  function to create 3 objects on the heap and store their addresses
  in the container array
*/

void CreateObjects(Vehicle* container[3]);

/*
  function to find average of price values of 3 objects in the conatiner array
 */

 float AveragePrice(Vehicle* container[3]);

#endif // FUNCTIONALITIES_H
