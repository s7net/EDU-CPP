#include <conio.h>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  const string SelectNumberText = R"(
  _______  ______   __   __    _______  _______  _______ 
  |       ||      | |  | |  |  |       ||       ||       |
  |    ___||  _    ||  | |  |  |       ||    _  ||    _  |
  |   |___ | | |   ||  |_|  |  |       ||   |_| ||   |_| |
  |    ___|| |_|   ||       |  |      _||    ___||    ___|
  |   |___ |       ||       |  |     |_ |   |    |   |    
  |_______||______| |_______|  |_______||___|    |___|    

  Hi, please select session number:
  0. archive
  1. Session1
  2. Session2
  3. Session3
    )";
  cout << SelectNumberText << endl;
  int SelectedNumber;
  cin >> SelectedNumber;
  const int PRICE = 200000;
  switch (SelectedNumber) {
  case 0:
    cout << R"(
    please select number
    1.for-while
    2.do-while
    3.Operators
    )";
    int s0SelectedNumber;
    int number;
    cin >> s0SelectedNumber;
    switch (s0SelectedNumber) {
    case 1:
  cout<<"please inter number:"<<endl;
  cin>>number;
    while(number<=100){
        cout<<++number<<endl;
    }
        break;
      case 2:
        int number;
        cout << "please inter number" << endl;
        cin >> number;
        do {
          cout << ++number << endl;
        } while (number <= 100);
        break;
      case 3:
        cout << R"(
            // To view the video tutorial, refer to Ostad Safai's Telegram
        // link : https://t.me/pcmabani/87
#include <iostream>
using namespace std;
int main()
{
    int a=0;
    //a+=a++;
    //a+=a--;
    //--a+=++a;
    //++a+=++a;
    //++a+=a++;
    //--a+=a++;

    cout<<"a="<<a<<endl;
return 0;
}
        )";
        break;}
    break;
  case 1:
    int x, y, s;
    cout << "please inter x :" << endl;
    cin >> x;
    cout << "please inter y :" << endl;
    cin >> y;
    s = x * y;
    cout << "Result: " << s;
    break;
  case 2:
    int a1, t1, a2, t2, a3, t3, s1, s2, s3, total, result;
    cout << "Please enter the length and width of the first room : \n sample 2 "
            "4 "
            "\n";
    cin >> a1 >> t1;
    cout
        << "& Please enter the length and width of the second room \n sample 2 "
           "4 \n";
    cin >> a2 >> t2;
    cout << "& Please enter the length and width of the third room \n sample 2 "
            "4 "
            "\n";
    cin >> a3 >> t3;
    cout << "thanks! please wait to show result \n";
    s1 = a1 * t1;
    s2 = a2 * t2;
    s3 = a3 * t3;
    total = (s1 + s2 + s3) * PRICE;
    result = (s1 > s2 && s1 > s3) ? s1 : (s2 > s1 && s2 > s3) ? s2 : s3;
    cout << "total price:" << total << "\n";
    cout << "more expensive room :" << result << "\n";
    break;
  case 3:
    string s3SelecteNumberText = R"(
      please Selecet Number :
      1.SerPrecision.cpp
      2.SizeOF.cpp
      3.DataTypeConvertor.cpp
      )";
    int s3SelectedNumber;
    cout << s3SelecteNumberText << endl;
    cin >> s3SelectedNumber;
    switch (s3SelectedNumber) {
    case 1:
      cout << "Please Inter Precision :" << endl;
      int PrecisionNumber;
      cin >> PrecisionNumber;
      cout << "Please Inter Number" << endl;
      double Number;
      cin >> Number;
      cout << "OK" << endl << setprecision(PrecisionNumber);
      cout << Number;
      break;
    case 2:
      cout << "DataType Size via sizeof function:" << endl;
      cout << "short :" << sizeof(short) << endl;
      cout << "int : " << sizeof(int) << endl;
      cout << "long : " << sizeof(long) << endl;
      cout << "long int : " << sizeof(long int) << endl;
      cout << "long long int : " << sizeof(long long int) << endl;
      cout << "string : " << sizeof(string) << endl;
      cout << "float : " << sizeof(float) << endl;
      cout << "double : " << sizeof(double) << endl;
      cout << "bool : " << sizeof(bool) << endl;
      break;
    case 3:
      cout << R"(Please Select DataType:
    1. int to char
    2. char to int
    )" << endl;
      int SelectedDataType;
      cin >> SelectedDataType;
      switch (SelectedDataType) {
      case 1:
        cout << "please inter your int Number : " << endl;
        int NumberINT;
        cin >> NumberINT;
        cout << char(NumberINT);
        break;
      case 2:
        cout << "Please inter your char :" << endl;
        char NumberCH;
        NumberCH = getch();
        cout << int(NumberCH);
        break;
      }
      break;
    }
    break;
  }
  return 0;
}
