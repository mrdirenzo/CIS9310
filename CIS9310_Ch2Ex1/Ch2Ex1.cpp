//Chapter 2, Exercise 1
//7.481 gallons per cubic foot
//User inputs gallons, returns cubic feet

#include <iostream>

using namespace std;

int main()
{
	const float cfactor = 7.481F;
	float gallons;

	cout << "Enter the number of gallons: ";
	cin >> gallons;
	cout << gallons << " gallons is: " << gallons * cfactor << " cubic feet." << endl;

	return 0;
}



