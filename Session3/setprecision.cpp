#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    cout<<"Please Inter Precision :"<<endl;
    int PrecisionNumber;
    cin>>PrecisionNumber;
    cout<<"Please Inter Number"<<endl;
    double Number;
    cin>>Number;
    cout<<"OK"<<endl<<setprecision(PrecisionNumber);
    cout<<Number;

return 0;
}
