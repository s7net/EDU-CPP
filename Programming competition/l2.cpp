#include <iostream>
using namespace std;

int main()
{
    const int size = 6;
    string name[size] = {"space", "mind", "reality", "power", "time", "soul"};
    string answers[size] = {"blue", "yellow", "red", "purple", "green", "orange"};
    string myName;
    cin >> myName;
    for (int i = 0; i < size; i++)
    {
        if (myName == name[i])
        {
            cout << answers[i];
        }
    }
    return 0;
}