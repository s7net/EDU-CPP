#include<iostream>
#include<conio.h>
using namespace std;
//  برنامه ای بنویسید که عددی از ورودی خوانده و روز متناظر آن را در هفته برایمان چاپ کند

void main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	if (number == 1)
	{
		cout << "Shanbe";
	}
	else if (number == 2)
	{
		cout << "Yekshanbe";
	}
	else if (number == 3)
	{
		cout << "Doshanbe";
	}
	else if (number == 4)
	{
		cout << "Seshanbe";
	}
	else if (number == 5)
	{
		cout << "Charshanbe";
	}
	else if (number == 6)
	{
		cout << "Panjshanbe";
	}
	else if (number == 7)
	{
		cout << "Fitile jome tatile :))))))))";
	}
	else
	{
		cout << "Error!!!!!!!!!!!!!!!!";
	}
	_getch();
}