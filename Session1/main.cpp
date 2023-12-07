
#include <cstdlib>
#include <iostream>

using namespace std;
int main() {

  int x, y, s;
  cin >> x >> y;
  s = x * y;
  cout << "Result: " << s;
  // back to main menu
  string s1SelectNumberText = R"(
    Please Select Number:
    1.ReRUN this File
    2.Back to Main Menu
    )";
  cout << s1SelectNumberText;
  int SelectedNumber;
  cin >> SelectedNumber;

  switch (SelectedNumber) {
  case 1: {
    cout << system("g++ -o s1 Session1/main.cpp && ./s1");
    cout << system("clear");
    break;
  }
  case 2: {
    cout << system("g++ -o main main.cpp && ./main");
    cout << system("clear");
    break;
  }
  }
  return 0;
}
