#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    const float p = 3.14;
    cout << (number + number) * p << endl;
    cout << (number * number) * p;

    return 0;
}