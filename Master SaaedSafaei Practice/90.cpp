#include <iostream> 
#include <conio.h>
using namespace std;

void rotate(int a[100][100], int n)
{
	int b[100][100];

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			b[j][n - i] = a[i][j];
		}
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			a[i][j] = b[i][j];
		}
	}
}

void read(int a[100][100], int n)
{
	for (int i = 0; i <= n; i++)
	{
		cout << "Enter " << n + 1 << " numbers for row " << i + 1 << " : ";
		for (int j = 0; j <= n; j++)
			cin >> a[i][j];
	}
}

void print(int a[100][100], int n)
{
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
}

int main()
{
	int num1[100][100], n;

	cout << "Enter n:";
	cin >> n;

	n = n - 1;

	read(num1, n);

	cout << "Primary array is \n";

	print(num1, n);
	rotate(num1, n);

	cout << "Rotated array is \n";

	print(num1, n);

	_getch();
	return 0;
}