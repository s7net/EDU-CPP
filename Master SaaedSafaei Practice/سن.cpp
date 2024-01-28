#include <iostream>
using namespace std;

int main()
{
	double ss = 31560000, second; // or ss = 3.156e7
	int age;

	cout << "Enter Age: ";
	cin >> age;

	second = age * ss;

	cout << "Second = " << second << endl;

	system("pause"); // or _getch if the conio.h library is called
	return 0;
}
