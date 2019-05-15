#include <string>
#pragma once

using namespace std;

class Car
{
private:
	string brand;
	string model;
	string color;
	int power;
public:
	Car();
	~Car();
	void setBrand(string brand);
	void setModel(string model);
	void print(std::ostream& output);
};

