#include <iostream>
using namespace std;

int main()
{
    // data Type
    int size = 50;
    float number[size];
    // input data from user
    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    }
    // for to for to for
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (number[i] == number[j])
            {
                for (int rep = j; rep < size; rep++)
                {
                    number[rep] = number[rep + 1];
                }
                size--;
            }
        }
    }
    // print uniq array
    for (int i = 0; i < size; i++)
    {
        cout << number[i] << endl;
    }

    return 0;
}