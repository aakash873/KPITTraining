#include <iostream>

#include "Vehicle.h"
#include "Functionalities.h"

int main(){

    Vehicle *garage[3];
    createVehciles(garage);

    std::cout << getAveragePrice(garage);
    std::cout << "------------------\n";

    Vehicle* minValueCar=getMinPriceCar(garage);
   // std::cout<<"Hello"<<std::endl;
    std::cout << *(minValueCar);

}