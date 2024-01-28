#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	float a4, pen, t, coste;

	cout << "Enter A4 and pen price: ";
	cin >> a4 >> pen;
	cout << "Enter t: ";
	cin >> t;

	coste = 50 * pen * t / 100 + 150 * a4 * t / 100;

	cout << "Extra cost is " << coste;

	_getch();
	return 0;
}