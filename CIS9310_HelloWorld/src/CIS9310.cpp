//============================================================================
// Name        : CIS9310.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int temp;
	int var1;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << 'x' << endl;
	cout << "Jim" << endl;
	cout << 509 << endl;
	cout << setw(10) << "george" << endl;
	cout << "Enter an integer value: ";
	cin >> temp;
	cout << temp << endl;
	temp += 23;
	cout << temp << endl;
	temp = temp + 23;
	cout << temp << endl;

	var1 = 20;
	cout << var1-- << endl;
	cout << ++var1 << endl;

	return 0;
}
