#include "Person.h"
#include <cstddef>

Person::Person()
{
	this->age = 0;
	this->name = NULL;
}

Person::Person(const char* name, int age) {
	setName(name);
	setAge(age);
}


Person::~Person()
{
}

int Person::getAge() {
	return this->age;
}

char* Person::getName() {
	return this->name;
}

void Person::setName(const char* name) {
	this->name = (char*)name;
}

void Person::setAge(int age) {
	this->age = age;
}
