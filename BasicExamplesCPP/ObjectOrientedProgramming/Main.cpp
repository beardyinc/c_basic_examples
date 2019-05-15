#include <iostream>
#include "Car.h"
#include "Person.h"

int main()
{
	Car car1; // already allocated stack memory
	Car* car2; // invalid pointer!
	car2 = new Car();

	car1.setBrand("Mercedes");
	car1.setModel("G63 AMG");
	car1.print(std::cout);


	Person p1;
	p1.setAge(22);
	p1.setName("Chantal");
	Person* p2 = &p1; //let p2 point to the memory of p1

	p2->setName("Veronique");

	cout << "Hi, my name is " << p1.getName() << endl;
	cout << "Hi, my name is " << p2->getName() << endl;

}