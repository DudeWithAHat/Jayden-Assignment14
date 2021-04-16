#pragma once

#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle {
protected:
	float towingCapacity;
public:
	//Getter
	float getTowingCapacity();
	//Setter
	void setTowingCapacity(float);

	//Overridden displayInfo
	virtual void displayInfo() override;
};
#endif
