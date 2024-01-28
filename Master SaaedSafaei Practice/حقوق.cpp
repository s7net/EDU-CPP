#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double salary, salary_received, insurance = 0.07, tax = 0.1; // Why double? | Why 0.07 & 0.1?

	cout << "Enter salary: ";
	cin >> salary;

	insurance = salary * insurance;
	tax = salary * tax;

	salary_received = salary - insurance - tax;

	cout << "Insurance = " << insurance << "\t Tax = " << tax << endl;
	cout << "Salary received = " << salary_received;

	_getch();
	return 0;
}
