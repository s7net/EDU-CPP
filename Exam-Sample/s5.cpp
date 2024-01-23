#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int num[size];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    for (int i = 0, zoj = 0, fard = 0; i < size; i++)
    {
        if (num[i] % 2)
        {
            zoj++;
        }
        else
        {
            fard++;
        }

        if (i == (size - 1))
        {
            cout << zoj << endl;
            cout << fard;
        }
    }
    return 0;
}