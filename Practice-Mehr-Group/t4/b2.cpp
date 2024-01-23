#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    for (float i = 1, temp = 0; i < number; i++)
    {
        temp += 1 / i;
        if (i == (number - 1))
        {
            cout << temp;
        }
    }
    return 0;
}