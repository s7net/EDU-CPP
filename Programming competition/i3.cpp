#include <iostream>
using namespace std;

int main()
{
    string text;
    cin >> text;

    cout << "Building : " << text[3] << endl;
    cout << "Floor : " << text[2] << endl;
    cout << "Class: " << text[0] << text[1] << text[2];
    return 0;
}