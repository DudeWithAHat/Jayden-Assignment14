#pragma once

#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle {
protected:
	int numOfDoors;

public:
	
	//Getter
	int getNumOfDoors();

	//Setter
	void setNumOfDoors(int);

	//Overridden displayInfo
	virtual void displayInfo() override;
};
#endif