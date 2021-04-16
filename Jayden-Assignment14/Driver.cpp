//Jayden Campbell
//CIS 1202 K01
//April 15th, 2021
//Assignment 14

#include "Truck.h"
#include "Car.h"
#include "StandardHFile.h"

void enterInfo(Vehicle&);
void enterNumOfDoors(Car&);
void enterTowingCapacity(Truck&);

int main() {
	Vehicle vehicle;
	Car car;
	Truck truck;

	cout << "Vehicle:\n";
	enterInfo(vehicle);

	cout << "\nVehicle Information:\n";
	vehicle.displayInfo();

	cout << "\nCar:\n";
	cin.ignore(100, '\n');
	enterInfo(car);
	enterNumOfDoors(car);

	cout << "\nCar Information:\n";
	car.displayInfo();

	cout << "\nTruck\n";
	cin.ignore(100, '\n');
	enterInfo(truck);
	enterTowingCapacity(truck);

	cout << "\nTruck information:\n";
	truck.displayInfo();

	cin.ignore(100, '\n');
	leave();
}

void enterInfo(Vehicle &vehicle) {
	string manufacturer;
	int yearBuilt;
	cout << "Please enter the name of the manufacturer: ";
	getline(cin, manufacturer);
	get(yearBuilt, "Please enter the year that this vehicle was built: ");
	while (yearBuilt < 0) {
		cout << "Please enter a year of 0 or above.\n";
		get(yearBuilt, "Please enter the year that this vehicle was built: ");
	}

	vehicle.setManufacturer(manufacturer);
	vehicle.setYearBuilt(yearBuilt);
}

void enterNumOfDoors(Car& car) {
	int numOfDoors;
	get(numOfDoors, "Please enter the number of doors: ");
	while (numOfDoors <= 0) {
		cout << "Please enter a number of doors above 0.\n";
		get(numOfDoors, "Please enter the number of doors.");
	}

	car.setNumOfDoors(numOfDoors);
}

void enterTowingCapacity(Truck& truck) {
	float towingCapacity;
	get(towingCapacity, "Please enter the towing capacity: ");
	while (towingCapacity < 0) {
		cout << "Please enter a towing capacity of 0 or above.\n";
		get(towingCapacity, "Please enter the towing capacity: ");
	}

	truck.setTowingCapacity(towingCapacity);
}