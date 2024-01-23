#include <iostream>
using namespace std;

int main()
{
    int score;
    cin >> score;

    if (score >= 18)
    {
        cout << "A";
    }
    else if (score >= 16)
    {
        cout << "B";
    }
    else if (score >= 14)
    {
        cout << "C";
    }
    else if (score >= 12)
    {
        cout << "D";
    }
    else if (score >= 10)
    {
        cout << "E";
    }
    else
    {
        cout << "F";
    }

    return 0;
}