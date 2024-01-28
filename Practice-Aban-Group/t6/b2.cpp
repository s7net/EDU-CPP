#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int *amir = &num;
    cout << *amir << endl;

    return 0;
}