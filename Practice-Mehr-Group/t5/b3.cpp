#include <iostream>
using namespace std;

int main()
{
    int size = 4;
    int z = 3;
    int sum[size];
    int number[size][z];

    // input data from user // 100% ok
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < z; j++)
        {
            cin >> number[i][j];
        }
    }

    /*
        cout << "---------------" << endl;
        // temp
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < z; j++)
            {
                cout << number[i][j] << " ";
            }
            cout << endl;
        }*/

    // sum objects // need check

    for (int i = 0; i < size; i++)
    {
        sum[i] = 0;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i] += number[i][j];
        }
    }

    //
    // sum[0] = number[0][0] + number[0][1] + number[0][2];
    // sum[1] = number[1][0] + number[1][1] + number[1][2];
    // sum[2] = number[2][0] + number[2][1] + number[2][2];
    // sum[3] = number[3][0] + number[3][1] + number[3][2];

    // temp
    // cout << "---------------" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << sum[i] << endl;
    // }

    // find max
    int max = sum[0];
    for (int i = 1; i < size; i++)
    {
        if (sum[i] > max)
        {
            max = sum[i];
        }

        if (i == (size - 1))
        {

            if (max == sum[0])
            {
                cout << "Rahman";
            }
            else if (max == sum[1])
            {
                cout << "Siroos";
            }
            else if (max == sum[2])
            {
                cout << "Bijan";
            }
            else if (max == sum[3])
            {
                cout << "Keyvan";
            }
        }
    }

    return 0;
}
