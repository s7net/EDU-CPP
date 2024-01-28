#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double t, y1, y2, y3;
	cout << "Enter price for 2 years: ";
	cin >> y1 >> y2;

	t = (y2 - y1) / y1;
	y3 = y1 + y2 * t;

	cout << "Inflation: %" << t << "\t\t price in next year: " << y3;

	_getch();
	return 0;
}