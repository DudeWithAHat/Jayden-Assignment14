#include "Vehicle.h"
#include <string>
#include <iostream>

using namespace std;
//Getters
string Vehicle::getManufacturer() {
	return manufacturer;
}
int Vehicle::getYearBuilt() {
	return yearBuilt;
}

//Setters
void Vehicle::setManufacturer(string s) {
	manufacturer = s;
}

void Vehicle::setYearBuilt(int i) {
	yearBuilt = i;
}

//Displays manufacturer and yearBuilt.
void Vehicle::displayInfo() {
	cout << "Manfucacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}