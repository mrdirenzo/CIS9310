/*
 * Ch2Ex11.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: mdirenzo
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << setiosflags(ios::left) << setw(12) << "Last name"
		 << setiosflags(ios::left) << setw(13) << "First name"
		 << setiosflags(ios::left) << setw(19) << "Street address"
		 << setiosflags(ios::left) << setw(12) << "Town"
		 << setiosflags(ios::left) << setw(5) << "State" << endl;
	cout << "-------------------------------------------------------------" << endl;
	cout << setiosflags(ios::left) << setw(12) << "Jones"
	     << setiosflags(ios::left) << setw(13) << "Bernard"
		 << setiosflags(ios::left) << setw(19) << "109 Pine Lane"
		 << setiosflags(ios::left) << setw(12) << "Littletown"
		 << setiosflags(ios::left) << setw(5) << "MI" << endl;
	cout << setiosflags(ios::left) << setw(12) << "O'Brian"
		 << setiosflags(ios::left) << setw(13) << "Coleen"
		 << setiosflags(ios::left) << setw(19) << "42 E. 99th Ave."
		 << setiosflags(ios::left) << setw(12) << "Bigcity"
		 << setiosflags(ios::left) << setw(5) << "NY" << endl;
	cout << setiosflags(ios::left) << setw(12) << "Wong"
		 << setiosflags(ios::left) << setw(13) << "Harry"
		 << setiosflags(ios::left) << setw(19) << "121-A Alabama St."
		 << setiosflags(ios::left) << setw(12) << "Lakeville"
		 << setiosflags(ios::left) << setw(5) << "IL" << endl;

	return 0;
}


