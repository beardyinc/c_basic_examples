#pragma once
#include <sstream>
#include <iostream>

using namespace std;

class Person {
private:
	int age;
	string name;

public:
	int foo;
	int getAge() const;
	string getName() const;
	void setName(string);
	void setAge(int);
	Person();
	Person(string name, int age);
	~Person();
};

