/* Ch2Ex8.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: mdirenzo
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	long popl1 = 2425785;
	long popl2 = 47;
	long popl3 = 9761;

	cout << setfill('.') << setw(8) << "LOCATION"
		 << setfill('.') << setw(12) << "POPULATION" << endl
		 << setfill('.') << setw(8) << "Portcity" << setfill('.') << setw(12) << popl1 << endl
		 << setfill('.') << setw(8) << "Hightown" << setfill('.') << setw(12) << popl2 << endl
		 << setfill('.') << setw(8) << "Lowville" << setfill('.') << setw(12) << popl3 << endl;

	return 0;
}
