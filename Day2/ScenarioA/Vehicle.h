#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>  // compiler header file
#include "Type.h"   // my header file


class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    Type _type;
    float _price;

public:
    Vehicle(
        std::string id,
        std::string brand,
        Type type,
        float price
     );
     Vehicle(
        std::string id,
        std::string brand,
        Type type
     );

    //  defaulted copy constructor
    // I will not wite the body of copy constructor. Compiler should generate a default
    // version of it during compilation
     Vehicle(const Vehicle&) = default;  

 
    ~Vehicle() {
        std::cout<<"Vehcile with ID:"
        << _id
        <<"is destroyed";
    }

    std::string id() const { return _id; }   // getter

    std::string brand() const { return _brand; }

    Type type() const { return _type; }

    float price() const { return _price; }
};

#endif // VEHICLE_H
