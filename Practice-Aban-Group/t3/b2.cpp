#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;
    if (number > 0)
    {
        for (int i = number, sum = number; i > 0; i--)
        {
            number--;
            sum += number;
            // cout << sum << " jam number" << (number - 1) << endl;

            if (i == 1)
            {
                // cout << "---" << endl;
                cout << sum << endl;
            }
        }
    }
    else
    {
        number = -(number);
        for (int i = number, sum = number; i > 0; i--)
        {
            number--;
            sum += number;
            // cout << sum << " jam number" << (number - 1) << endl;

            if (i == 1)
            {
                // cout << "---" << endl;
                cout << -(sum) << endl;
            }
        }
    }

    return 0;
}