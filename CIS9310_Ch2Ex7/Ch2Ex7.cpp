/*
 * Ch2Ex7.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: mdirenzo
 */

#include <iostream>

using namespace std;

int main()
{
	float celsius;
	float fahrenheit;

	cout << "Enter the temperature in degrees C: ";
	cin >> celsius;
	cout << "The temperature in fahrenheit is: ";
	fahrenheit = (celsius * (9/5)) + 32;
	cout << fahrenheit << endl;

	return 0;
}
