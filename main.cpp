#include <iostream>
using namespace std;

int main() {
  const string educppText = R"(
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
  cout << educppText << endl;

  int selectedNumber;
  cin >> selectedNumber;
  system("clear");

  switch (selectedNumber) {
  case 1:
    system("g++ -o s1 Session1/main.cpp && ./s1");
    break;
  case 2:
    system("g++ -o s2 Session2/main.cpp && ./s2");
    break;
  case 3:
    system("clear");
    string s3SelectNumberText = R"(
			 please select file :
			1.setPrecision.cpp
			2.SizeOF.cpp
			3.DataTypeConvertor.cpp
			)";
    cout << s3SelectNumberText << endl;
    int s3SelectNumber;
    cin >> s3SelectNumber;
    switch (s3SelectNumber) {
    case 1:
      system("g++ -o s3setPrecision Session3/setPrecision.cpp $$ "
             "./s3SetPrecision");
      break;
    case 2:
      system("g++ -o s3SizeOF Session3/SizeOF.cpp && ./s3SizeOF");
      break;
    case 3:
      system("g+= -o s3DataTypeConvertor Session3/DataConvertor.cpp && ./s3DataTypeConvertor");
      break;
    }

    break;
  }
  return 0;
}
