#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Car.h"

/*
  This function should create objects on heap and store their pointers
  in the array
*/
void CreateObjects(Car* arr[3]);

float AveragePrice(Car* arr[3]);

/*
  For Calculating tax
 */

void CallCalculateTax(Car* arr[3]);

/*
  Delete all acquired memories*/
void FreeMemory(Car *arr[3]);

#endif // FUNCTIONALITIES_H
