#include <sstream>
#include <iostream>

using namespace std;

void stringTest() {

	stringstream ss;
	int i = 55;
	ss << i;
	// cout << ss << endl; // will not work!
	string str = ss.str(); 	//convert to string object
	cout << "content of string: " << str << endl;
	const char* cstr = str.c_str();	//convert to c-style string
	int j;
	ss >> j;
	cout << "content of integer: " << j << endl;

	ss << "blubb";
	int k;
	ss >> k;
	cout << "content of integer: " << k << endl; // will not produce an error but print garbage!
}