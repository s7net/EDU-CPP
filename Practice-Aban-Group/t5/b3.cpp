#include <iostream>
using namespace std;

int main()
{
    int size = 6;
    float ghad = 4.0;
    float number[size];
    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    }

    for (int i = 0, count = 0; i < size; i++)
    {
        for (int j = (i + 1); j < size; j++)
        {
            if (number[i] + number[j] > ghad)
            {
                count++;
            }
        }

        if (i == (size - 1))
        {
            if (count >= 1)
            {
                cout << "no";
            }
            else
            {
                cout << "yes";
            }
        }
    }

    return 0;
}