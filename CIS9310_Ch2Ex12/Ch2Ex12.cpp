/*
 * Ch2Ex12.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: mdirenzo
 */

#include <iostream>

using namespace std;

int main()
{
	float decpounds;
	int pounds;
	int shillings;
	int pence;
	float decfrac;

	cout << "Enter decimal pounds: \x9c";
	cin >> decpounds;
	cout << "Equivalent in old notation = \x9c";

	pounds = static_cast<int>(decpounds);
	decfrac = decpounds - pounds;
	shillings = static_cast<int>(decfrac * 20);
	decfrac = decfrac*20 - shillings;
	pence = static_cast<int>(decfrac * 12);

	cout << pounds << '.' << shillings << '.' << pence << endl;

	return 0;
}
