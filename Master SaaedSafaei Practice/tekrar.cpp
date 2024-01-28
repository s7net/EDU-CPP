#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a[100], repeat[100] = { 0 }, max = 0, index_max, n;

	cout << "Enter Array size: ";
	cin >> n;

	cout << "Enter Element of Array: ";
	for (int i = 0; i<n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i] == a[j]) 
				repeat[i]++;
		if (repeat[i] > max)
		{
			max = repeat[i];
			index_max = i;
		}
	}

	cout << a[index_max];

	_getch();
	return 0;
}