#include <iostream>
using namespace std;

int main()
{
    int size = 5, dup[size];
    float num[size];

    // input data from user
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    // intializing dup array
    for (int i = 0; i < size; i++)
    {
        dup[i] = 0;
    }

    // find duplicate
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (num[i] == num[j] && i != j)
            {
                dup[i]++;
            }
        }
    }

    // find max
    int max = 0;
    float valueLargger;
    for (int i = 0; i < size; i++)
    {
        if (max < dup[i])
        {
            max = dup[i];
            valueLargger = num[i];

            // cout << valueLargger << ":" << i << endl;
        }

        // print valueLargger after find largger
        if (i == (size - 1))
        {
            cout << valueLargger;
        }
    }
    return 0;
}