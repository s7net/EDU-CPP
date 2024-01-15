#include <iostream>

using namespace std;

int main()
{
    // input data from user
    int size = 10, score[size];
    for (int i = 0; i < size; i++)
    {
        cin >> score[i];
    }

    // finding max number;
    int max = score[0];
    for (int i = 1; i < size; i++)
    {

        for (; max < score[i];)
        {
            max = score[i];
        }
        if (i == (size - 1))
        {
            int ekh = 20 - max;
            for (int i = 0; i < size; i++)
            {
                cout << score[i] + ekh << endl;
            }
        }

        // temp
        // if (i == (size - 1))
        // {
        //     cout << "max is : " << max << endl;
        // }
    }

    // finding min number;
    int min = score[0];
    for (int i = 1; i < size; i++)
    {

        for (; min > score[i];)
        {
            min = score[i];
        }
        // temp
        // if (i == (size - 1))
        // {
        //     cout << "min is : " << min;
        // }
    }

    return 0;
}