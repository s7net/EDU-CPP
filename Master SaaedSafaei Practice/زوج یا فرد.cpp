#include<iostream>
#include<conio.h>
using namespace std;

// برنامه ای بنویسید که عددی از ورودی خوانده و زوج و فرد بودن آن را مشخص کند

void main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	if (number % 2 == 0)
	{
		cout << "Zoj";
	}
	else
	{
		cout << "Fard";
	}
	_getch();
}