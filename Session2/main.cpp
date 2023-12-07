#include <iostream>
using namespace std;
int main() {
  int a1, t1, a2, t2, a3, t3, s1, s2, s3, total, result;
  const int PRICE = 200000;
  // get data from user
  cout << "Please enter the length and width of the first room : \n sample 2 4 "
          "\n";
  cin >> a1 >> t1;
  cout << "& Please enter the length and width of the second room \n sample 2 "
          "4 \n";
  cin >> a2 >> t2;
  cout << "& Please enter the length and width of the third room \n sample 2 4 "
          "\n";
  cin >> a3 >> t3;
  cout << "thanks! please wait to show result \n";
  // export data
  s1 = a1 * t1;
  s2 = a2 * t2;
  s3 = a3 * t3;
  total = (s1 + s2 + s3) * PRICE;
  result =
   (s1 > s2 && s1 > s3) ? s1 :
   (s2 > s1 && s2 > s3) ?
    s2 : s3;
  cout << "total price:" << total << "\n";
  cout << "more expensive room :" << result << "\n";
  return 0;
}
