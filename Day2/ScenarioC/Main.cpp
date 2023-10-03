#include "Car.h"
#include "Functionalities.h"

int main(){
    //3 locations reserved;each location can store 8 bytes(address)
    Vehicle* arr[3]; 

    CreateObjects(arr);

    std::cout<<"Average for all cars: "<<AveragePrice(arr)<<"\n";

    

    FreeMemory(arr);
}