#include "Truck.h"
#include <iostream>

using namespace std;

//Getter
float Truck::getTowingCapacity() {
	return towingCapacity;
}

//Setter
void Truck::setTowingCapacity(float f) {
	towingCapacity = f;
}

//Overridden displayInfo
void Truck::displayInfo(){
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << endl;
}