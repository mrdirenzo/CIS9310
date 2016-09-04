/*
 * Ch2Ex6.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: mdirenzo
 */

#include <iostream>

using namespace std;

int main()
{
	const float bpound = 1.487F;
	const float franc = 0.172F;
	const float mark = 0.584F;
	const float jyen = 0.00955F;

	float dollars;

	cout << "Enter an amount in US dollars: ";
	cin >> dollars;
	cout << "$" << dollars << " dollars equivalent to:" << endl;
	cout << dollars / bpound << " British pounds sterling." << endl;
	cout << dollars / franc << " French francs." << endl;
	cout << dollars / mark << " German deutschemarks." << endl;
	cout << dollars / jyen << " Japanese yen." << endl;

	return 0;
}
