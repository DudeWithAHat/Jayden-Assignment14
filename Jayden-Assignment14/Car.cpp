#include "Car.h"

#include <iostream>

using namespace std;

//Getter
int Car::getNumOfDoors() {
	return numOfDoors;
}
//Setter
void Car::setNumOfDoors(int i) {
	numOfDoors = i;
}

//Overriden displayInfo
void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Number of Doors: " << numOfDoors << endl;
}