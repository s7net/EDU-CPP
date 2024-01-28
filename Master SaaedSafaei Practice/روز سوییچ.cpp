#include<iostream>
#include<conio.h>
using namespace std;
//  برنامه ای بنویسید که عددی از ورودی خوانده و روز متناظر آن را در هفته برایمان چاپ کند

void main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	switch (number)
	{
	case 1:
		cout << "Shanbe";
		break;

	case 2:
		cout << "Yekshanbe";
		break;

	case 3:
		cout << "Doshanbe";
		break;

	case 4:
		cout << "Seshanbe";
		break;

	case 5:
		cout << "Charshanbe";
		break;

	case 6:
		cout << "Panjshanbe";
		break;

	case 7:
		cout << "Fitile jome tatile :))))))))";
		break;

	default:
		cout << "Error!!!!!!!!!!!!!!!!";
	}
	
	_getch();
}