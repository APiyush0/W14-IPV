//
//  Car.hpp
//  W14 IPV
//
//  Created by Piyush Aggarwal on 4/19/23.
//

#pragma once
#include "Vehicle.hpp"

using namespace std;

class Car : public Vehicle
{
private:
    int numDoors;
public:
    Car(string manufacturer, int yearBuilt, int numDoors);
    
    int getNumDoors() const;
    void setNumDoors(int numDoors);
    void displayInfo() const override;
    
};
