//
//  Vehicle.hpp
//  W14 IPV
//
//  Created by Piyush Aggarwal on 4/19/23.
//

#pragma once
#include <string>

using namespace std;

class Vehicle {
private:
    string manufacturer;
    int yearBuilt;
public:
    Vehicle(string manufacturer, int yearBuilt);
    string getManufacturer() const;
    int getYearBuilt() const;
    
    void setManufacturer(std::string manufacturer);
    void setYearBuilt(int yearBuilt);
    
    virtual void displayInfo() const;
};
