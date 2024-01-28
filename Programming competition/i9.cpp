#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << " _";
        }
        cout << endl;
        for (int k = 0; k < (n2 + 1); k++)
        {
            cout << "| ";
        }
        cout << endl;
        if (i == (n1 - 1))
        {
            for (int i = 0; i < n2; i++)
            {
                cout << " _";
            }
        }
    }
    return 0;
}