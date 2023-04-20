//
//  main.cpp
//  W14 IPV
//
//  Created by Piyush Aggarwal on 4/18/23.
//

#include <iostream>
#include "Vehicle.hpp"
#include "Car.hpp"
#include "Truck.hpp"

using namespace std;

int main() {
    
    // Get input from user for Vehicle object
    string v_manufacturer;
    int v_year_built;
    
    cout << "Enter manufacturer of vehicle: ";
    getline(cin, v_manufacturer);
    
    cout << "Enter year built of vehicle: ";
    cin >> v_year_built;
    cin.ignore(); // Ignore trailing newline character

    // Create Vehicle object and display information
    Vehicle v(v_manufacturer, v_year_built);
    cout << "Vehicle information:\n";
    
    v.displayInfo();
    cout << "\n";

    // Get input from user for Car object
    string c_manufacturer;
    int c_year_built;
    int c_num_doors;
    
    cout << "Enter manufacturer of car: ";
    getline(std::cin, c_manufacturer);
    
    cout << "Enter year built of car: ";
    cin >> c_year_built;
    
    cout << "Enter number of doors of car: ";
    cin >> c_num_doors;
    cin.ignore(); // Ignore trailing newline character

    // Create Car object and display information
    Car c(c_manufacturer, c_year_built, c_num_doors);
    cout << "Car information:\n";
    
    c.displayInfo();
    cout << "\n";

    // Get input from user for Truck object
    string t_manufacturer;
    int t_year_built;
    int t_towing_capacity;
    
    cout << "Enter manufacturer of truck: ";
    getline(cin, t_manufacturer);
    
    cout << "Enter year built of truck: ";
    cin >> t_year_built;
    
    cout << "Enter towing capacity of truck: ";
    cin >> t_towing_capacity;
    cin.ignore(); // Ignore trailing newline character

    // Create Truck object and display information
    Truck t(t_manufacturer, t_year_built, t_towing_capacity);
    cout << "Truck information:\n";
    
    t.displayInfo();
    cout << "\n";

    return 0;
}
