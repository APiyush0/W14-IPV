//
//  Truck.hpp
//  W14 IPV
//
//  Created by Piyush Aggarwal on 4/19/23.
//

#pragma once
#include "Vehicle.hpp"

class Truck : public Vehicle
{
private:
    int towingCapacity;
public:
    Truck(string manufacturer, int yearBuilt, int towingCapacity);
    
    int getTowingCapacity() const;
    void setTowingCapacity(int towingCapacity);
    void displayInfo() const override;
};

