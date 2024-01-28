#include <iostream>
using namespace std;

int main()
{
    int red = 0, yellow = 0;
    string text;
    cin >> text;
    int size = text.length();
    for (int i = 0; i < size; i++)
    {
        // count red and yellow labels
        if (text[i] == 'R')
        {
            red++;
        }
        if (text[i] == 'Y')
        {
            yellow++;
        }
    }

    // assassment labels
    if (red >= 3)
    {
        cout << "nakhor lite";
    }
    else if (red >= 2 && yellow >= 2)
    {
        cout << "nakhor lite";
    }
    else if (red + yellow == 5)
    {
        cout << "nakhor lite";
    }
    else
    {
        cout << "rahat baash";
    }

    return 0;
}