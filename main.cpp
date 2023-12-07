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
  1. Session1
  2. Session2
  3. Session3
    )";
  cout << SelectNumberText << endl;
  int SelectedNumber;
  cin >> SelectedNumber;
  cout << system("clear");
  switch (SelectedNumber) {
  case 1:
    cout << system("g++ -o main /Session1/main.cpp && ./main");
    break;
  case 2:
    cout << system("g++ -o main /Session2/main.cpp && ./main");
    break;
  case 3:
    cout << system("clear");
    string s3SelecteNumberText = R"(
      please Selecet Number :
      1.SerPrecision.cpp
      2.SizeOF.cpp
      3.DataTypeConvertor.cpp
      )";
    int s3SelectedNumber;
    cin >> s3SelectedNumber;
    switch (s3SelectedNumber) {
    case 1:
      cout << system("g++ -o main /Session3/SerPrecision.cpp");
      break;
    case 2:
      cout << system("g++ -o main /Session3/SizeOF.cpp");
      break;
    case 3:
      cout << system("g++ -o main /Session3/DataTypeConvertor.cpp");
      break;
    }
    break;
  }
  return 0;
}
