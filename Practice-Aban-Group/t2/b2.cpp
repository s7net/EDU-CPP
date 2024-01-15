#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;
    cout << "Sum : " << num1 + num2 + num3 + num4 << endl;
    cout << "Product : " << num1 * num2 * num3 * num4 << endl;
    float avg = (num1 + num2 + num3 + num4) / 4.0;
    cout << "Avrage : " << avg;
    return 0;
}