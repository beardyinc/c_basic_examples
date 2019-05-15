#include <iostream>
#include "Car.h"

Car::Car()
{
	// all variables should contain default values
	this->color = "0x000000";
	this->brand = "";
	this->model = "";
	this->power = 0;
}


Car::~Car()
{
}

void Car::setBrand(string brand) {
	this->brand = brand;
}

void Car::setModel(string model) {
	this->model = model;
}

void Car::print(std::ostream& output) {
	output << this->brand << " " << this->model << " (" << this->power << " hp)" << endl;
}