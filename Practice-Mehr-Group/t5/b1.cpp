#include <iostream>
using namespace std;

int main()
{
    string tempString1 = "", tempString2 = "";
    int number, count = 1;
    cin >> number;

    for (int i = number; i > 1; i /= 10)
    {
        count++;
    }
    // temp
    cout << count % 2 << endl;

    // zoj
    if (count % 2 == 0)
    {
        // temp
        cout << "in zoje" << endl;
        string numberString = to_string(number);

        for (int i = 0; i < (count / 2); i++)
        {
            tempString1 += numberString[i];
        }
        for (int i = (count - 1); i > ((count / 2) - 1); i--)
        {
            tempString2 += numberString[i];
        }

        // temp cout << tempString1 << " - " << tempString2 << endl;

        if (tempString1 == tempString2)
        {
            cout << "motagharen ast";
        }
        else
        {
            cout << "motagharen nist";
        }
    }
    // mofrad
    else
    {
        cout << "in farde" << endl;
        string numberString = to_string(number);
        int nimIntCount = count / 2;
        for (int i = 0; i <= nimIntCount; i++)
        {
            tempString1 += numberString[i];
        }
        for (int i = (count - 1); i >= (nimIntCount); i--)
        {
            tempString2 += numberString[i];
        }

        // temp
        cout << tempString1 << " - " << tempString2 << endl;

        if (tempString1 == tempString2)
        {
            cout << "motagharen ast";
        }
        else
        {
            cout << "motagharen nist";
        }
    }

    return 0;
}
