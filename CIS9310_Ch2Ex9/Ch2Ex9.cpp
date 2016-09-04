/*
 * Ch2Ex9.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: mdirenzo
 */

#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, sum1, sum2;
	char dummychar;

	cout << "Enter first fraction: ";
	cin >> a >> dummychar >> b;
	cout << "Enter second fraction: ";
	cin >> c >> dummychar >> d;
	sum1 = a*d + b*c;
	sum2 = b*d;
	cout << "Sum: " << sum1 << dummychar << sum2 << endl;

	return 0;
}
