#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    for (int sum = 0; number > 0;)
    {
        int temp = number % 10;
        sum += temp;
        number /= 10;
        if (number == 0)
        {
            cout << sum;
        }
    }
    return 0;
}