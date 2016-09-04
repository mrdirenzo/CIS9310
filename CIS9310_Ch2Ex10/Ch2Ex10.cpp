/*
 * Ch2Ex10.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: mdirenzo
 */

#include <iostream>

using namespace std;

int main()
{
	float pounds, shillings, pence;
	float decpounds;

	//Old monetary system:
	//1 pound = 20 shillings
	//1 shilling = 12 pence
	//
	//New monetary system:
	//1 pound = 100 pence

	cout << "Enter pounds: ";
	cin >> pounds;
	cout << "Enter shillings: ";
	cin >> shillings;
	cout << "Enter pence: ";
	cin >> pence;

	decpounds = pounds + (shillings + pence/12)/20;

	cout << "Decimal pounds: " << '\x9c' << decpounds << endl;

	return 0;
}
