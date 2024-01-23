#include <iostream>
using namespace std;

int m(int n1, int n2);

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int sum = m(n1, n2);
    cout << sum;
    return 0;
}

int m(int n1, int n2)
{
    int sum = n1 * n2;
    return sum;
}
