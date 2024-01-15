#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    for (int i = 0; i < number; i++)
    {
        int starNumbers = (i * 2) + 1;
        for (int i = 0; i < starNumbers; i++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}