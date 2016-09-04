/*
 * Ch2Ex5.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: mdirenzo
 */

#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	char a;
	int b;

	cout << "Enter a single character (letter): ";
	cin >> a;
	b = islower(a);
	cout << b << endl;

	return 0;
}


