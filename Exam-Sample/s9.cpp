#include <iostream>
using namespace std;

int fact(int number);

int main()
{
    int number;
    cin >> number;
    cout << fact(number);
    return 0;
}

int fact(int number)
{
    if (number == 0)
    {
        return (1);
    }
    return (number * fact(number - 1));
}
