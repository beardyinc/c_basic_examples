#include <iostream>
#include <sstream>

using namespace std;

void inputTest() {
	cout << "please enter a number :";
	string container;
	cin >> container;

	int number = stoi(container);
	cout << "the square of the number is " << number * number << endl;
}