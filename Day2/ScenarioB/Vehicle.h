#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "VehicleType.h"

class Vehicle {

private:
    std::string _id;
    std::string _brand;
    VehicleType _type;
    float _price;

public:
    Vehicle(const Vehicle& obj) = default;
    Vehicle(std::string id, std::string brand, float price,  VehicleType type);
    Vehicle(std::string id, std::string brand, VehicleType type);
    virtual float CalculateTax() = 0; // pure virtual function (known as Abstract method in Java)
     
    ~Vehicle() {
        std::cout <<"Object with ID: "
           << _id
           << "is destroyed\n";
    }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    VehicleType type() const { return _type; }

    float price() const { return _price; }

};

#endif // VEHICLE_H
