#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	int x1, x2, y1, y2;
	float d;

	cout << "Enter x1, y1: ";
	cin >> x1 >> y1;
	cout << "Enter x2, y2: ";
	cin >> x2 >> y2;

	d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	cout << "Distance = " << d;
		
	_getch();
	return 0;
}