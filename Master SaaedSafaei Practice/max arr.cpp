#include <iostream> 
#include <conio.h>
using namespace std; 

void readarray(int a[4][5]); 
void writearray(int a[4][5]); 
void findmaxrow(int a[4][5]); 

int main()
{
	int a[4][5] = { 0 };

	readarray(a);
	findmaxrow(a);

	cout << "\t*****result*****";

	writearray(a);

	_getch();
	return 0;
}

void readarray(int a[4][5])
{
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter row(" << i + 1 << "): ";

		for (int j = 0; j < 4; j++)
		{
			cin >> a[i][j];
		}		
	}
}

void findmaxrow(int a[4][5])
{
	for (int i = 0; i < 4; i++)
	{
		a[i][4] = a[i][0];
		for (int j = 1; j < 4; j++)
			if (a[i][4] < a[i][j])
			{
				a[i][4] = a[i][j];
			}
	}
}

void writearray(int a[4][5])
{
	for (int i = 0; i < 4; i++)
	{
		cout << endl;
		for (int j = 0; j < 4; j++)
		{
			cout << "   " << a[i][j];
		}
		cout << "\t   " << a[i][4];
	}
}