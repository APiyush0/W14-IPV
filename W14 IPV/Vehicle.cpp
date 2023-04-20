//
//  Vehicle.cpp
//  W14 IPV
//
//  Created by Piyush Aggarwal on 4/19/23.
//

#include "Vehicle.hpp"
#include <iostream>

using namespace std;

Vehicle::Vehicle(string manufacturer, int yearBuilt)
    : manufacturer(manufacturer), yearBuilt(yearBuilt)
{
}


string Vehicle::getManufacturer() const
{
    return manufacturer;
}

int Vehicle::getYearBuilt() const
{
    return yearBuilt;
}

void Vehicle::setManufacturer(string manufacturer)
{
    this->manufacturer = manufacturer;
}

void Vehicle::setYearBuilt(int yearBuilt)
{
    this->yearBuilt = yearBuilt;
}

void Vehicle::displayInfo() const
{
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year built: " << yearBuilt << endl;
}

