#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    string num1String = to_string(num1);
    int size = num1String.length();
    string Num1R = "";
    for (int i = (size - 1); i >= 0; i--)
    {
        Num1R += num1String[i];
        if (i == 0)
        {
            string Num2R = to_string(num2);
            if (Num1R == Num2R)
            {
                cout << "Yes";
            }
            else
            {
                cout << "No";
            }
        }
    }

    return 0;
}