#include "Vehicle.h"
#include "Type.h"
#include "Functionalities.h"

/*
   A.) Developer makes a container of objects.Container is copied when create object is called
   from CreateObject function to main function

   B.) user creates an empty container. User passes its reference to the function
   developer accesses this reference puts the object directly in that container
*/

int main(){
    Vehicle* arr[3];
    //parameters?
    CreateObjects(arr);
    std::cout<<"Average Price: "<<AveragePrice(arr);
}