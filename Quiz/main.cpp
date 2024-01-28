#include <iostream>
using namespace std;

int main()
{
    system("cls");
    const int size = 14;
    list exam[size];

    // questions
    exam[0].question = R"(
#include <iostream>
using namespace std;
int main( )
{
 int i=1,a;
 a=i++;
 --i;
 a=--i;
 return 0;
}

:: whats "a" output ?
            )";

    exam[1].question = R"(
#include <iostream>
using namespace std;
int main( )
{
 int a,b;
 a=9/3*(1+2);
 b=a++;
  return 0;
}

:: whats "b" output ?
            )";

    exam[2].question = R"(
#include <iostream>
using namespace std;
int main( )
{
 int a,b=1,c;
 a=3*4/2-b++;
 c=(a+=2)-b;
  return 0;
}

:: whats "c" output ?
            )";

    exam[3].question = R"(
#include <iostream>
using namespace std;
int main( )
{
 int a=0,b;
 b=--a+=a++;
}

:: whats "b" output ?
            )";

    exam[4].question = R"(
#include <iostream>
using namespace std;
int main( )
{
  int a=2,b;
  ++a+=++a;
  b=-!a++;
}

:: whats a & b output (ex put : ab => 01)?
            )";

    exam[5].question = R"(
#include <iostream>
using namespace std;
int main( )
{
 int a=0,b=0;
 ++b=a++;
 a+=b;
 b+=a;
 (a>b)?b++:a++;
}

:: whats a & b output (ex put : ab => 01)?
            )";

    exam[6].question = R"(
#include <iostream>
using namespace std;
int main( )
{
 int a=1,b=!a;
 b=a--;
 a+=--b;
 (a==b)?b+=a:a+=b;
}

:: whats a & b output (ex put : ab => 01)?
            )";

    exam[7].question = R"(
#include <iostream>
using namespace std;
int main( )
{
 int a=2,b=1;
++b+=a+=(a%b)?a++:b++;
}

:: whats a output ?
            )";

    exam[8].question = R"(
#include <iostream>
using namespace std;
int main(){
 int a=2,b=1;
 cout<<(a-=2)?b:++b<<++b<<++b;
}

whats output ?
            )";

    exam[9].question = R"(
#include <iostream>
using namespace std;
int main(){
int i=0;
for (i;;)
{ 
 cout <<"Hi"<<endl;
 if (i==10){
 i=0;
 break;
 } else ++i;
}
}

:: several times "Hi" Printed?
            )";

    exam[10].question = R"(
int main()
{
  int i=0;
  for( ; ;i++){
    cout<<"Hello ";
    while(i<=3){
      i++;
      continue;      
    }
    if (i%2)
      break;
    continue;
  }
  return 0;
}

:: sereval times "Hello" Printed?
            )";

    exam[11].question = R"(
#include <iostream>
using namespace std;
int main() {
for (int i=0;i<=10;i++){
  while(i<5){
    do
      cout<<"Yalda ";
    while(i<2);
  i++;
  }
}
    return 0;
}

:: sereval times "Yalda" Printed (ex : unilimited)?
            )";

    exam[12].question = R"(
#include <iostream>
using namespace std;
int main(){
  int a[]={2};
  int b=10;
  a[1]=3;
  b+=++b;
}

:: whats "b" output ?
            )";

    exam[13].question = R"(
#include <iostream>
using namespace std;
int main(){
  int a[]={2};
  int b=10;
  a[1]=3;
  ++b+=0;
}

whats "b" output ?
            )";

    // answers
    exam[0].answer = "0";
    exam[1].answer = "9";
    exam[2].answer = "5";
    exam[3].answer = "0";
    exam[4].answer = "80";
    exam[5].answer = "21";
    exam[6].answer = "00";
    exam[7].answer = "36";
    exam[8].answer = "0";
    exam[9].answer = "11";
    exam[10].answer = "2";
    exam[11].answer = "unilimited";
    exam[12].answer = "8";
    exam[13].answer = "11";

    for (int i = 0; i < size; i++)
    {
        exam[i].flag = false;
    }

    const int ctn = 6;
    exam[0].correct_note = "Great !";
    exam[1].correct_note = "Fantastic !";
    exam[2].correct_note = "Good Job !";
    exam[3].correct_note = "you are very good";
    exam[4].correct_note = "Nice";
    exam[4].correct_note = "very good";

    for (int i = 0; i < ctn; i++)
    {
        exam[i].cnflag = false;
    }

    // flag question
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        int rand_index;
        do
        {
            rand_index = rand() % size;
        } while (exam[rand_index].flag);

        exam[rand_index].flag = true;

        // print question
        cout << exam[rand_index].question;
        cout << endl;
        string answer;
        cin >> answer;

        system("cls");
        // result answer

        if (exam[rand_index].answer == answer)
        {
            cout << "your answer is correct !! ";
            for (int i = 0, count = 0; i < ctn; i++)
            {
                if (exam[i].cnflag == true)
                {
                    count++;
                }

                if (count == ctn)
                {
                    for (int i = 0; i < ctn; i++)
                    {
                        exam[i].cnflag = false;
                    }
                }
            }

            // rand number for correct number
            do
            {
                rand_index = rand() % ctn;
            } while (exam[rand_index].cnflag);

            exam[rand_index].cnflag = true;

            cout << exam[rand_index].correct_note << endl;

            i++;
        }
        else
        {
            cout << "your answer is not correct ... try again" << endl;
        }
    }
    return 0;
}