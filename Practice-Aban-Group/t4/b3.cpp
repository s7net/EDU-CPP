#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    for (int i = 1, count = 0; i <= num1; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            count++;
            // cout << count << endl;
        }
        if (i == (num1))
        {
            cout << (num1 * num2) / count;
        }
    }

    return 0;
}