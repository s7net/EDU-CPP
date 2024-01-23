#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    char chaR[size];
    // input
    for (int i = 0; i < size; i++)
    {
        cin >> chaR[i];
    }
    // scan uniq indexs
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (chaR[i] == chaR[j])
            {
                for (int k = j; k < size; k++)
                {
                    chaR[k] = chaR[k + 1];
                }
                size--;
            }
        }
    }

    // cout new array
    for (int i = 0; i < size; i++)
    {
        cout << chaR[i] << " ";
    }

    return 0;
}