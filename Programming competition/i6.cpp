#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    for (int i = 0; i < number; i++)
    {
        // sare kari
        int x1, x2;
        cin >> x1 >> x2;
        if (i == (number - 1))
        {
            cout << x2;
        }
    }
    return 0;
}