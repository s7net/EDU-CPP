#include<iostream>
#include<conio.h>
using namespace std;
//  برنامه ای بنویسید عددی از ورودی خوانده و فصل متناظر با آن را برایمان چاپ کند

void main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	switch (number)
	{
	case 1:
		cout << "Bahar";
		break;

	case 2:
		cout << "Tabestan";
		break;

	case 3:
		cout << "Paeez";
		break;

	case 4:
		cout << "Zemestan";
		break;

	default:
		cout << "Error!!!!!!!!!!!!!!!!";
	}
	
	_getch();
}