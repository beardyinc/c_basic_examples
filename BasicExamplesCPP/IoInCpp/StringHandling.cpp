#include <sstream>
#include <iostream>

using namespace std;

void stringTest() {



	stringstream strStr;
	int i = 55;
	strStr << i;
	// cout << ss << endl; // will not work!
	string str = strStr.str(); 	//convert to string object
	cout << "content of string: " << str << endl;


	const char* cstr = str.c_str();	//convert to c-style string
	int j;
	strStr >> j;
	cout << "content of integer: " << j << endl;

	strStr << "blubb";
	int k;
	strStr >> k;
	cout << "content of integer: " << k << endl; // will not produce an error but print garbage!
}