#include <iostream>
using namespace std;

int main()
{
    int number[2][10];
    // input data from user
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> number[i][j];
        }
    }

    // jaam arrays
    for (int i = 0, jam1 = 0, jam2 = 0; i < 10; i++)
    {
        jam1 += number[0][i];
        jam2 += number[1][i];
        if (i == 9)
        {
            if (jam1 == jam2)
            {
                cout << "equal";
            }
            else
            {
                cout << "unequal";
            }
        }
    }

    return 0;
}