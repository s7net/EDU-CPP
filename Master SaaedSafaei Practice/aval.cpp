#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int n1, n2;

	cout << "Enter two numbers: ";
	cin >> n1 >> n2;

	if (n1 < 2) 
	{
		n1 = 2;
	}

	for (int i = n1; i <= n2; i++) 
	{
		bool is_prime = true;

		for (int j = 2; j * j <= i; j++) 
		{
			if (i % j == 0) 
			{
				is_prime = false;
				break;
			}
		}

		if (is_prime && i != 1) 
		{
			cout << i << "\t";
		}
	}

	_getch();
	return 0;
}