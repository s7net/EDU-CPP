#include <iostream>
using namespace std;

int main()
{
    int size = 12;
    int numbers[size];
    // input
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    // print statis text
    for (int i = 0, sum = 0; i < size; i++)
    {
        sum += numbers[i];

        //
        if (i == (size - 1))
        {
            cout << "sum = " << sum << endl;
        }
    }
    // print sheet 3*4
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";

        if ((i + 1) == 4 || (i + 1) == 8 || (i + 1) == 12)
        {
            cout << endl;
        }
    }
    return 0;
}