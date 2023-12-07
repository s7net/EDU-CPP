#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    cout<<R"(Please Select DataType:
    1. int to char
    2. char to int
    )"<<endl;
    int SelectedDataType;
    cin>>SelectedDataType;
    switch (SelectedDataType)
{
    case 1:
    cout<<"please inter your int Number : "<<endl;
    int NumberINT;
    cin>>NumberINT;
    cout<<char(NumberINT);
    break;
    case 2:
    cout<<"Please inter your char :"<<endl;
    char NumberCH;
    NumberCH = getch();
    cout<<int(NumberCH);
    break;

}
return 0;
}
