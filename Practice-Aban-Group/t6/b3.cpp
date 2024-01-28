#include <iostream>
using namespace std;

int sum_numbers(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int number;
    cin >> number;

    int result = sum_numbers(number);

    cout << result << endl;

    return 0;
}
