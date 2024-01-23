#include <iostream>
using namespace std;

int runner(char m1, char m2, int &bijanScore, int &keyvanScore);

int main()
{
    char m1, m2;
    int bijanScore = 0, keyvanScore = 0;

    for (; bijanScore != 3 && keyvanScore != 3;)
    {
        cin >> m1 >> m2;
        runner(m1, m2, bijanScore, keyvanScore);
        // cout << bijanScore << ":" << keyvanScore;
    }

    if (bijanScore == 3)
    {
        cout << "barande bijan";
    }
    else if (keyvanScore == 3)
    {
        cout << "barande keyvan";
    }
    return 0;
}

int runner(char m1, char m2, int &bijanScore, int &keyvanScore)
{
    // mosavi
    if ((m1 == 'k' && m2 == 'k') || (m1 == 's' && m2 == 's') || (m1 == 'g' && m2 == 'g'))
    {
    }
    // bjan winner
    else if ((m1 == 's' && m2 == 'g') || (m1 == 'k' && m2 == 's') || m1 == 'g' && m2 == 'k')
    {
        bijanScore++;
    }
    // keyvan winner
    else if ((m1 == 'g' && m2 == 's') || (m1 == 's' && m2 == 'k') || (m1 == 'k' && m2 == 'g'))
    {
        keyvanScore++;
    }
    // kos-sher
    else
    {
        cout << "kos sher nazan dige";
    }

    return 0;
}
