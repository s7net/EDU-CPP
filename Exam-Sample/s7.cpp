#include <iostream>
using namespace std;

int main()
{
    const int size = 7;
    float numbers[size];

    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];

        if (i == (size - 1))
        {
            cout << sum;
        }
    }

    return 0;
}