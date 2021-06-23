// CPP program to demonstrate
// modf() function
#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main() {
	// Take any value
	double x = 5.06, intpart, fraction;

	// Breaks k into two parts
	fraction = modf(x, &intpart);

	cout << "Integer Value = " << intpart << endl << "Fraction Value = " << fraction << endl;

	_getch();
	return 0;
}