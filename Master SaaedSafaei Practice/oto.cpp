#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	long int cost;

	cout << "Enter cost: ";
	cin >> cost;

	for (int i = 1; i <= 10; i++)
	{
		cost -= cost * 0.2;
		cout << "Cost for " << i << " year(s) later = " << cost << endl;
	}

	_getch();
	return 0;
}