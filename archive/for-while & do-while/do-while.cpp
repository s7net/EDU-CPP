#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"please inter number"<<endl;
    cin>>number;
    do{
        cout<<++number<<endl;
    } while(number<=100);

return 0;
}
