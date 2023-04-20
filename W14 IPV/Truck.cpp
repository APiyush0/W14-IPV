//
//  Truck.cpp
//  W14 IPV
//
//  Created by Piyush Aggarwal on 4/19/23.
//

#include "Truck.hpp"
#include <iostream>

using namespace std;

Truck::Truck(string manufacturer, int yearBuilt, int towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity)
{
}

int Truck::getTowingCapacity() const
{
    return towingCapacity;
}

void Truck::setTowingCapacity(int towingCapacity)
{
    this->towingCapacity = towingCapacity;
}

void Truck::displayInfo() const
{
    Vehicle::displayInfo();
    std::cout << "Towing capacity: " << towingCapacity << std::endl;
}
