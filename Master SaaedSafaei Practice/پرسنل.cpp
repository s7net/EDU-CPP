#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int numEmployees;
	double hourlyRate;

	cout << "Enter the number of employees: ";
	cin >> numEmployees;

	cout << "Enter hourly rate: ";
	cin >> hourlyRate;

	for (int i = 0; i < numEmployees; ++i) 
	{
		int employeeID;
		double workedHours;

		cout << "Enter Employee ID: ";
		cin >> employeeID;

		cout << "Enter worked hours: ";
		cin >> workedHours;

		double totalPayment = hourlyRate * workedHours;

		if (workedHours > 40) {
			double overtimeHours = workedHours - 40;
			totalPayment += (overtimeHours * hourlyRate * 3 / 2);
		}

		cout << "Employee ID: " << employeeID << endl;
		cout << "Total payment: $" << totalPayment << endl;
		cout << endl;
	}

	_getch();
	return 0;
}
