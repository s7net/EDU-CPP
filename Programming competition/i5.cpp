#include <iostream>
using namespace std;

int main()
{
    const int size = 4;
    int numbers[size], ender;
    int count = 0;
    cin >> ender;
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 1; i <= ender; i++)
    {
        if (i % numbers[0] == 0 || i % numbers[1] == 0 || i % numbers[2] == 0 || i % numbers[3] == 0)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}