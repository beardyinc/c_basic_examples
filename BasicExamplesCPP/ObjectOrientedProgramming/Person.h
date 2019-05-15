#pragma once

class Person {
private:
	int age;
	char* name;
public:
	int getAge();
	char* getName();
	void setName(const char*);
	void setAge(int);
	Person();
	Person(const char* name, int age);
	~Person();
};

