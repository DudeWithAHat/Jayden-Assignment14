#pragma once

#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

using namespace std;

class Vehicle {


protected:
	string manufacturer;
	int yearBuilt;
public:
	//Getters
	string getManufacturer();
	int getYearBuilt();

	//Setters
	void setManufacturer(string);
	void setYearBuilt(int);
	
	//Displays manufacturer and yearBuilt.
	virtual void displayInfo();
};


#endif