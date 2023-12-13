#include <iostream>
using namespace std;

int main()
{
    float price,takhfif,takhfif2,total;
    cout<<"please inter price:"<<endl;
    cin>>price;
    cout<<"please inter takhfif:"<<endl;
    cin<<takhfif;
    takhfif2 = 1 - (takhfif/100);
    total = takhfif2*price;
    cout<<total;

return 0;
}
