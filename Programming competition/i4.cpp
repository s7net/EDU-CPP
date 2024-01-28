#include <iostream>
using namespace std;

int main()
{
    string text1, text2;
    cin >> text1 >> text2;
    int size2 = text2.length();

    if (text1[0] == text2[size2 - 1])
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}