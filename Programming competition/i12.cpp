#include <iostream>
using namespace std;

int main()
{
    string number;
    cin >> number;
    int size = number.length();

    for (int i = 0; i < size; i++)
    {
        cout << number[i] << ": ";
        for (int j = 0; j < number[i]; j++)
        {
            cout << number[i];
        }
        cout << endl;
    }

    return 0;
}
