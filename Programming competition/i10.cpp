#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size;
    cin >> size;
    cin.ignore();
    string *full_names = new string[size];

    // input data from user
    for (int i = 0; i < size; i++)
    {
        getline(cin, full_names[i]);
    }

    string *first_names = new string[size];
    for (int i = 0; i < size; i++)
    {
        first_names[i] = "";
    }

    // export first names
    for (int i = 0; i < size; i++)
    {
        string temp = full_names[i];
        for (int j = 0; temp[j] != ' ' && temp[j] != '\0'; j++)
        {
            first_names[i] += temp[j];
        }
    }

    // count array for first names
    int *count = new int[size];
    for (int i = 0; i < size; i++)
    {
        count[i] = 1;
    }

    // counting
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (first_names[i] == first_names[j] && i != j)
            {
                count[i]++;
            }
        }
    }

    // remove duplicate
    int max = count[0];
    for (int i = 0; i < size; i++)
    {
        if (max < count[i])
        {
            max = count[i];
        }
    }

    cout << max;

    delete[] full_names;
    delete[] first_names;

    return 0;
}