#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && a == c)
    {
        cout << "Equilateral";
    }
    else if (a == b || a == c || b==c)
    {sudowzhj_intsa
    sudowzhj_insta
        cout << "Isosceles";
    }
    else
    {
        cout << "Scalene";
    }
    return 0;
}