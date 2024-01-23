#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    for (int i = 0; i < number; i++)
    {
        int count = i + 1;
        for (int j = 1; j <= count; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}