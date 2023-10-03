#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Car.h"

/*
  This function should create objects on heap and store their pointers
  in the array
*/
void CreateObjects(Vehicle* garage[3]);

float AveragePrice(Vehicle* garage[3]);

/*
  For Calculating tax
 */

void CallCalculateTax(Vehicle* garage[3]);

/*
  Delete all acquired memories*/
void FreeMemory(Vehicle *garage[3]);

#endif // FUNCTIONALITIES_H
