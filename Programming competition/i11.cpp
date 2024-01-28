#include <iostream>
using namespace std;

int main()
{
    string text;
    cin >> text;
    int size = text.length();

    for (int i = 0; i < size; i++)
    {

        for (int k = 0; k < i; k++)
        {
            cout << text[i];
        }
        for (int j = i; j < size; j++)
        {
            cout << text[j];
        }
        cout << endl;
    }
    return 0;
}