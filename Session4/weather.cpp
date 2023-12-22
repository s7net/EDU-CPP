#include <iostream>
using namespace std;

int main()
{

    int i, dama[40], minDama, indexNumber = 0;
    for (i = 0; i < 40; i++)
    {
        cin >> dama[i];
    }

    minDama = dama[0];

    for (i = 1; i < 40; i++)
    {
        if (minDama > dama[i])
        {
            minDama = dama[i];
            indexNumber = i;
        }
    }

    cout << "-----" << endl;
    cout << "minimum dama : " << minDama << endl
         << "and index[" << indexNumber << "]" << endl;

    cout << "dama list is :" << endl;
    for (i = 39; i > -1; i--)
    {
        cout << dama[i] << endl;
    }
    return 0;
}
