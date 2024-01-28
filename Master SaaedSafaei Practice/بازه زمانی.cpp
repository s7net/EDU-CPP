#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
	int hour1, minute1, hour2, minute2;;

	cout << "Enter first time (hh mm): ";
	cin >> hour1 >> minute1;

	cout << "Enter second time (hh mm): ";
	cin >> hour2 >> minute2;

	int time1InMinutes = hour1 * 60 + minute1;
	int time2InMinutes = hour2 * 60 + minute2;

	int timeDifferenceInMinutes = time2InMinutes - time1InMinutes;

	int hoursDifference = timeDifferenceInMinutes / 60;
	int minutesRemaining = timeDifferenceInMinutes % 60;

	cout << "Time difference is: " << hoursDifference << " hours and " << minutesRemaining << " minutes" << endl;

	_getch();
	return 0;
}
