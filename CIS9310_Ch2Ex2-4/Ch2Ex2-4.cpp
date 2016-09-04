/*
 * Ch2Ex2.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: mdirenzo
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << 1990 << '\t' << setw(5) << 135 << endl;
	cout << 1991 << '\t' << setw(5) << 7290 << endl;
	cout << 1992 << '\t' << setw(5) << 11300 << endl;
	cout << 1993 << '\t' << setw(5) << 16200 << endl;

	int var1 = 10;

	cout << var1 << endl;
	var1 += 10;
	cout << var1-- << endl;
	cout << var1 << endl;

	cout << "Candy is dandy,\n";
	cout << "But liquor is quicker.\n";

	return 0;
}
