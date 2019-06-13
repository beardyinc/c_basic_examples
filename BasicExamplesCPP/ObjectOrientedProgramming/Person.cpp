#include "Person.h"

using namespace std;

Person::Person() //Default CTor
{
	this->age = 0;
	this->name = "N/A";
	std::cout << "Hello from the default CTor!" << std::endl;
}

Person::Person(string name, int age) {
	setName(name);
	setAge(age);
}


Person::~Person()
{
	std::cout << "Destructing " << name << endl;
}

int Person::getAge() const {
	return this->age;
}

string Person::getName() const {
	return this->name;
}

void Person::setName(string name) {
	if (name.length() >= 3) {
		this->name.assign(name);
	}
	else {
		std::cerr << "Names must at least have 3 characters, " << name << " had " << name.length() << endl;
	}
}

void Person::setAge(int age) {
	if (age >= 0)
		this->age = age;
	else
		std::cerr << "People cannot have a negative age, you entered " << age << endl;
}
