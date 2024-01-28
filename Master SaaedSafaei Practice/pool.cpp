#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int sum;
	cout << "Result is (500 200 100 50): " << endl;
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 5; j++)
		{
			for (int k = 0; k <= 10; k++)
			{
				for (int m = 0; m <= 20; m++)
				{
					sum = m * 50 + k * 100 + j * 200 + i * 500;
					if (sum == 1000)
					{
						cout << "(" << i << ", " << j << ", " << k << ", " << m << ") \t";
					}
				}
			}
		}
	}
	_getch();
	return 0;
}