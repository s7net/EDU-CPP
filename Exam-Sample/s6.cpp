#include <iostream>
using namespace std;

void m(int number);

int main()
{
    int number;
    cin >> number;

    m(number);
    return 0;
}
// ex
// 6 // 6/6 - ok // 6/5 bad // 6/4 bad // 6/3 ok // 6/2 ok // 6/1 ok
void m(int number)
{
    for (int i = number; i > 0; i--)
    {
        if (number % i == 0)
        {
            cout << i << endl;
        }
    }
}