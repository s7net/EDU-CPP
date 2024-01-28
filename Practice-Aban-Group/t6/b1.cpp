#include <iostream>
#include <string>
using namespace std;

void ejazeye_vorood(string name, int age);

int main()
{
    string name;
    int age;
    cin >> name >> age;
    ejazeye_vorood(name, age);
}

void ejazeye_vorood(string name, int age)
{
    if (age >= 18)
    {
        cout << name << " aziz be website sabt ahval khosh amadid";
    }
    else
    {
        cout << name << " aziz lotfan baraye anjame omoor lazem az tarighe ghayem khod eghdam konid";
    }
};
