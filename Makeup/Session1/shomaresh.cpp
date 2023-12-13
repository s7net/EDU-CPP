#include <iostream>
using namespace std;

int main()
{
  int number;
  cout<<"please inter number:"<<endl;
  cin>>number;
  if (number<=9)
  {
  cout<<"yekan";
  }
  else if(number<=99)
  {
  cout<<"dahgan";
  }
  else if (number<=999)
  {
  cout<<"sadgan";
  }
  else 
  {
  cout<<"we are supported three precision";
  }

return 0;
}
