#include<iostream>
#include<conio.h>
using namespace std;
// برنامه ای بنویسید که 3 عدد از ورودی خوانده و کوچکترین و بزرگترین عدد را در خروجی برایمان چاپ کند

void main()
{
	int n1, n2, n3, Max, Min;
	cout << "Enter Number 1: ";
	cin >> n1;
	cout << "Enter Number 2: ";
	cin >> n2;
	cout << "Enter Number 3: ";
	cin >> n3;
	Max = Min = n1;
	if (n2 > Max)
	{
		Max = n2;
	}
	if (n3 > Max)
	{
		Max = n3;
	}
	if (n2 < Min)
	{
		Min = n2;
	}
	if (n3 < Min)
	{
		Min = n3;
	}
	cout << "Max = " << Max << "\tMin = " << Min;
	_getch();
}