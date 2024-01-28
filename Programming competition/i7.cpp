#include <iostream>
using namespace std;

int main()
{
    string text1, text2;
    int length, count = 0;
    cin >> length >> text1 >> text2;
    for (int i = 0; i < length; i++)
    {
        if (text1[i] != text2[i])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}