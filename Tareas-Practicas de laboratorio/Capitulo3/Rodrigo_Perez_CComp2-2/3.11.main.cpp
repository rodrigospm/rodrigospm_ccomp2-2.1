/* (MotorVehicle class) Create a class called MotorVehicle that represents a motor vehicle
using: make (type string), fuelType (type string), yearOfManufacture (type int), color (type string)
and engineCapacity (type int). Your class should have a constructor that initializes the three
data members. Provide a set and a get function for each data member. Add a member function
called displayCarDetails that displays the five data members in five separate lines in the form
"member name: member value". Write a test program to demonstrate MotorVehicle’s capabilities. */

#include <iostream>
#include "3.11.h"

using namespace std;

int main() {
    MotorVehicle vehicle1{"Honda", "Diesel", 2004, "Red", 1000};

    vehicle1.displayCarDetails();

}