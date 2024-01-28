#include<iostream>
#include<conio.h>
using namespace std;

// برنامه ای بنویسید که طول سه پاره خط را از ورودی گرفته و بگوید که آیا
// این 3 پاره خط تشکیل مثلث میدهند یا خیر

void main()
{
	int x, y, z;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter z: ";
	cin >> z;
	system("cls");
	if (x + y > z && x + z > y && z + y > x)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	_getch();
}