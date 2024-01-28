#include<iostream>
#include<conio.h>
using namespace std;
//  برنامه ای بنویسید که عددی از ورودی خوانده و فصل متناظر آن  برایمان چاپ کند

void main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	if (number == 1)
	{
		cout << "Bahar";
	}
	else if (number == 2)
	{
		cout << "Tabestan";
	}
	else if (number == 3)
	{
		cout << "Paeez";
	}
	else if (number == 4)
	{
		cout << "Zemestan";
	}
	else
	{
		cout << "Error!!!!!!!!!!!!!!!!";
	}
	_getch();
}