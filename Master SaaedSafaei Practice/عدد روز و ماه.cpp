#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int day, month , result;
	cout << "Enter month: ";
	cin >> month;
	cout << "Enter day: ";
	cin >> day;
	if (month <= 6 && day <= 31 && day > 0 && month > 0) // در 6 ماه اول
	{
		result = (month - 1) * 31 + day;
		cout << "Dar " << result << " Omin rooz sal hastim";
	}

	if (month > 6 && month <= 12 && day > 0 && day <= 30) // در 6 ماه دوم
	{
		result = (6 * 31) + (month - 6 - 1) * 30 + day;
		cout << "Dar " << result << " Omin rooz sal hastim";
		// result = (month - 1) * 30 + day + 6;
	}

	if (month > 12 || month < 1 || day > 31 || day < 1)
	{
		cout << "Error!!!!!!!!!!!!!!!!!";
	}
	
	return 0;
}
