#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int i, findBigger, biggersCount = 0;
    float score[30];
    float jamScore;

    cout << "please inter score for find Bigger Scores: " << endl;
    cin >> findBigger;
    cout << "please inter 30 score to start running" << endl;
    for (i = 0; i < 30; i++)
    {
        cin >> score[i];
    }
    jamScore = score[0];
    for (i = 1; i < 30; i++)
    {
        jamScore += score[i];
    }

    ;
    for (i = 0; i < 30; i++)
    {
        if (findBigger < score[i])
        {
            biggersCount++;
        }
    }

    cout << setprecision(4);

    float miangin = jamScore / 30.0;

    cout << "--Result--" << endl;
    cout << "miangin = " << miangin << endl;
    cout << "-----" << endl
         << "Number of Biggers is : " << biggersCount << endl;
    cout << "list score is" << endl;
    for (i = 0; i < 30; i++)
    {
        cout << score[i] << endl;
    }

    return 0;
}
