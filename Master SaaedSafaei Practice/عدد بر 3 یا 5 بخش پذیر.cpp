#include<iostream>
#include<conio.h>
using namespace std;

// برنامه ای بنویسید که عددی از ورودی خوانده و اگر عدد بر 3 یا 5 بخش پذیر بود  
// در خروجی بله و در غیر این صورت خیر چاپ کند

void main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	if (number % 3 == 0 || number % 5 == 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	_getch();
}