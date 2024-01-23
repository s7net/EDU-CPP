#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    if (number > 0)
    {
        cout << number;
    }
    else
    {
        cout << -(number);
    }
    return 0;
}