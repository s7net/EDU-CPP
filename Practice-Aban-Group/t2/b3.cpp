#include <iostream>

using namespace std;

int main()
{

    int z1, z2, z3;
    cin >> z1 >> z2 >> z3;
    if (z1 == z2 && z1 == z3 && z2 == z3)
    {
        cout << "Equilateral";
    }
    else if (z1 == z2 || z1 == z3 || z2 == z3)
    {

        cout << "Isosceles";
    }
    else
    {
        cout << "Scalene";
    }

    return 0;
}