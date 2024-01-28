#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int num;
	bool isFibonacci = false;

	cout << "Enter a number: ";
	cin >> num;

	int a = 0, b = 1, nextTerm = a + b;
	while (nextTerm <= num) 
	{
		if (nextTerm == num) 
		{
			isFibonacci = true;
			break;
		}
		a = b;
		b = nextTerm;
		nextTerm = a + b;
	}

	if (isFibonacci) 
	{
		cout << num << " is part of the Fibonacci sequence." << endl;
	}
	else 
	{
		cout << num << " is not part of the Fibonacci sequence." << endl;
	}

	_getch();
	return 0;
}
