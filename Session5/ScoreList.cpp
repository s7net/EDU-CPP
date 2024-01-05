#include <iostream>
using namespace std;

int main()
{

    int size = 4, i, j = 0, Number[30][2];
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> Number[i][j];
        }
    }
    cout << "-----------" << endl;

    for (i = 0; i < size; i++)
    {
        cout << Number[i][0] << ":" << Number[i][1] << endl;
    }

    cout << "-----------" << endl;
    cout << "ok now inter student number to find score:";
    int studentNumber;
    cin >> studentNumber;
    for (int i = 0, countElse = 0; i < 4; i++)
    {
        if (studentNumber == Number[i][0])
        {
            cout << Number[i][1];
        }
        else
            countElse++;
        if (countElse == 30)
        {
            cout << "Student Number not valid";
        }
    }

    return 0;
}