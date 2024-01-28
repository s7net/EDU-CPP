#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <cmath>

using namespace std;
int m1(int n1, int n2);
int fact(int number);
void m(int number);
int runner(char m1, char m2, int &bijanScore, int &keyvanScore);
string getOsName();
int clear(string OS);
bool Exit();
void rotate(int a[100][100], int n);
void read(int a[100][100], int n);
void print(int a[100][100], int n);
void readarray(int a[4][5]);
void writearray(int a[4][5]);
void findmaxrow(int a[4][5]);
char board[3][3];
void displayBoard();
bool checkWin(char player);
bool makeMove(int row, int col, char player);

int main()
{
    string OS = getOsName();
    clear(OS);
    do
    {
        string MenuText = R"(
   _______  ______   __   __    _______  _______  _______ 
  |       ||      | |  | |  |  |       ||       ||       |
  |    ___||  _    ||  | |  |  |       ||    _  ||    _  |
  |   |___ | | |   ||  |_|  |  |       ||   |_| ||   |_| |
  |    ___|| |_|   ||       |  |      _||    ___||    ___|
  |   |___ |       ||       |  |     |_ |   |    |   |    
  |_______||______| |_______|  |_______||___|    |___|    

     1.Session1
     2.Session2
     3.Session3
     4.Session4
     5.Session5
     6.archive
     7.Practice Aban Group
     8.Practice Mehr Group
     9.Makeup
     10.Exam Sample
     11.Quiz Mode
     12.Programming competition
     13.Master SaaedSafaei Practice

     please choose number: )";
        cout << MenuText;

        int MenuNumber;
        cin >> MenuNumber;

        //// Switch Menu
        switch (MenuNumber)
        {
        // main => case1
        case 1:
        {
            clear(OS);
            clear(OS);
            int x, y, s;
            cout << "please inter x :" << endl;
            cin >> x;
            cout << "please inter y :" << endl;
            cin >> y;
            s = x * y;
            clear(OS);
            cout << "Result: " << s << endl;
            break;
        }
        // main => case2
        case 2:
        {
            clear(OS);
            int a1, t1, a2, t2, a3, t3, s1, s2, s3, total, result;
            const int PRICE = 200000;

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

            s1 = a1 * t1;
            s2 = a2 * t2;
            s3 = a3 * t3;
            total = (s1 + s2 + s3) * PRICE;
            result =
                (s1 > s2 && s1 > s3) ? s1 : (s2 > s1 && s2 > s3) ? s2
                                                                 : s3;
            cout << "total price:" << total << "\n";
            cout << "more expensive room :" << result << "\n";
            break;
        }
        // main => case3
        case 3:
        {
            clear(OS);
            clear(OS);
            string MenuC3 = R"(
1.DataTypeConvertor
2.SetPrecision
3.SizeOF

please choose number:)";
            cout << MenuC3;
            int MenuNumberC3;
            cin >> MenuNumberC3;
            //// Switch Menu C3
            switch (MenuNumberC3)
            {
            // main => case 3 => case 1
            case 1:
            {
                clear(OS);
                cout << R"(
    Please Select DataType:
    1. int to char
    2. char to int
    )" << endl;
                int SelectedDataType;
                cin >> SelectedDataType;
                switch (SelectedDataType)
                {
                case 1:
                {
                    clear(OS);
                    cout << "please inter your int Number : " << endl;
                    int NumberINT;
                    cin >> NumberINT;
                    cout << char(NumberINT);
                    break;
                }
                case 2:
                {
                    clear(OS);
                    cout << "Please inter your char :" << endl;
                    char NumberCH;
                    NumberCH = getch();
                    cout << int(NumberCH);
                    break;
                }
                }
                break;
            }
            // main => case 3 => case 2
            case 2:
            {
                cout << "Please Inter Precision :" << endl;
                int PrecisionNumber;
                cin >> PrecisionNumber;
                cout << "Please Inter Number" << endl;
                double Number;
                cin >> Number;
                cout << "OK" << endl
                     << setprecision(PrecisionNumber);
                cout << Number;
                break;
            }
            // main => case 3 => case 3
            case 3:
            {
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
            }
            }
        }
        // main => case4
        case 4:
        {
            clear(OS);
            clear(OS);
            string MenuC4 = R"(
            1.score
            2.weather

            please choose number:

        )";
            cout << MenuC4;
            int MenuNumberC4;
            cin >> MenuNumberC4;
            //// switch C4
            switch (MenuNumberC4)
            {
            // Menu => case 4 => case 1
            case 1:
            {
                clear(OS);
                int i, findBigger, biggersCount = 0;
                float score[30];
                float jamScore;

                cout << "please inter score for find Bigger Scores: " << endl;
                cin >> findBigger;
                cout << "please inter 30 score to start running" << endl;
                for (i = 0; i < 30; i++)
                {
                    cin >> score[i];
                }
                jamScore = score[0];
                for (i = 1; i < 30; i++)
                {
                    jamScore += score[i];
                }

                ;
                for (i = 0; i < 30; i++)
                {
                    if (findBigger < score[i])
                    {
                        biggersCount++;
                    }
                }

                cout << setprecision(4);

                float miangin = jamScore / 30.0;

                cout << "--Result--" << endl;
                cout << "miangin = " << miangin << endl;
                cout << "-----" << endl
                     << "Number of Biggers is : " << biggersCount << endl;
                cout << "list score is" << endl;
                for (i = 0; i < 30; i++)
                {
                    cout << score[i] << endl;
                }
                break;
            }
            // Menu => case 4 => case 2
            case 2:
            {
                int i, dama[40], minDama, indexNumber = 0;
                for (i = 0; i < 40; i++)
                {
                    cin >> dama[i];
                }

                minDama = dama[0];

                for (i = 1; i < 40; i++)
                {
                    if (minDama > dama[i])
                    {
                        minDama = dama[i];
                        indexNumber = i;
                    }
                }

                cout << "-----" << endl;
                cout << "minimum dama : " << minDama << endl
                     << "and index[" << indexNumber << "]" << endl;

                cout << "dama list is :" << endl;
                for (i = 39; i > -1; i--)
                {
                    cout << dama[i] << endl;
                }
                break;
            }
            }
            break;
        }
        // main => case5
        case 5:
        {
            clear(OS);
            int size = 4, i, j = 0, Number[30][2];
            for (i = 0; i < size; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    cin >> Number[i][j];
                }
            }
            cout << "-----------" << endl;

            for (i = 0; i < size; i++)
            {
                cout << Number[i][0] << ":" << Number[i][1] << endl;
            }

            cout << "-----------" << endl;
            cout << "ok now inter student number to find score:";
            int studentNumber;
            cin >> studentNumber;
            for (int i = 0, countElse = 0; i < 4; i++)
            {
                if (studentNumber == Number[i][0])
                {
                    cout << Number[i][1];
                }
                else
                    countElse++;
                if (countElse == 30)
                {
                    cout << "Student Number not valid";
                }
            }
            break;
        }
        // main => case6
        case 6:
        {
            clear(OS);
            break;
        }

        // main => case7
        case 7:
        {
            clear(OS);
            string MenuTextC7;
            MenuTextC7 = R"(

            2. tamrin 2
            3. tamrin 3
            4. tamrin 4
            5. tamrin 5
        )";
            cout << MenuTextC7;
            int MenuNumberC7;
            cin >> MenuNumberC7;
            //// Switch Menu C7
            switch (MenuNumberC7)
            {
            // main => case 7 => case
            case 2:
            {
                string MenuC7C2 = R"(
                1.bakhs 1
                2.bakhs 2
                3.bakhs 3

        please choose number:
    )";
                int MneuNumberC7C2;
                cin >> MneuNumberC7C2;

                // Switch Main => C7 => C2
                switch (MneuNumberC7C2)
                {
                // main => case 7 => case 2 => case 1
                case 1:
                {
                    clear(OS);
                    int day, month, year;
                    cin >> day >> month >> year;
                    cout << year << "/" << month << "/" << day;
                    break;
                }
                // main => case 7 => case 2 => case 2
                case 2:
                {
                    clear(OS);
                    int num1, num2, num3, num4;
                    cin >> num1 >> num2 >> num3 >> num4;
                    cout << "Sum : " << num1 + num2 + num3 + num4 << endl;
                    cout << "Product : " << num1 * num2 * num3 * num4 << endl;
                    float avg = (num1 + num2 + num3 + num4) / 4.0;
                    cout << "Avrage : " << avg;
                    break;
                }
                // main => case 7 => case 2 => case 3
                case 3:
                {
                    clear(OS);
                    int z1, z2, z3;
                    cin >> z1 >> z2 >> z3;
                    if (z1 == z2 && z1 == z3 && z2 == z3)
                    {
                        cout << "Equilateral";
                    }
                    else if (z1 == z2 || z1 == z3 || z2 == z3)
                    {

                        cout << "Isosceles";
                    }
                    else
                    {
                        cout << "Scalene";
                    }
                    break;
                }
                }
            }
            // main => case 7 => case 3
            case 3:
            {
                string MenuTextC7C3 = R"(
                1.bakhs 1
                2.bakhs 2
                3.bakhs 3
                4.bakhs 4

        please choose number:
    )";
                cout << MenuTextC7C3;
                int MneuNumberC7C3;
                cin >> MneuNumberC7C3;

                // Switch Main => C7 => C2
                switch (MneuNumberC7C3)
                {
                // main => case 7 => case 3 => case 1
                case 1:
                {
                    clear(OS);
                    int number;
                    cin >> number;

                    for (int i = 0; i < number; i++)
                    {
                        int starNumbers = (i * 2) + 1;
                        for (int i = 0; i < starNumbers; i++)
                        {
                            cout << "*";
                        }
                        cout << endl;
                    }
                    break;
                }
                // main => case 7 => case 3 => case 2
                case 2:
                {
                    clear(OS);
                    int number;
                    cin >> number;
                    if (number > 0)
                    {
                        for (int i = number, sum = number; i > 0; i--)
                        {
                            number--;
                            sum += number;
                            // cout << sum << " jam number" << (number - 1) << endl;

                            if (i == 1)
                            {
                                // cout << "---" << endl;
                                cout << sum << endl;
                            }
                        }
                    }
                    else
                    {
                        number = -(number);
                        for (int i = number, sum = number; i > 0; i--)
                        {
                            number--;
                            sum += number;
                            // cout << sum << " jam number" << (number - 1) << endl;

                            if (i == 1)
                            {
                                // cout << "---" << endl;
                                cout << -(sum) << endl;
                            }
                        }
                    }
                    break;
                }
                // main => case 7 => case 3 => case 3
                case 3:
                {
                    clear(OS);
                    // input data from user
                    const int size = 10;
                    int score[size];
                    for (int i = 0; i < size; i++)
                    {
                        cin >> score[i];
                    }

                    // finding max number;
                    int max = score[0];
                    for (int i = 1; i < size; i++)
                    {

                        for (; max < score[i];)
                        {
                            max = score[i];
                        }
                        if (i == (size - 1))
                        {
                            int ekh = 20 - max;
                            for (int i = 0; i < size; i++)
                            {
                                cout << score[i] + ekh << endl;
                            }
                        }

                        // temp
                        // if (i == (size - 1))
                        // {
                        //     cout << "max is : " << max << endl;
                        // }
                    }

                    // finding min number;
                    int min = score[0];
                    for (int i = 1; i < size; i++)
                    {

                        for (; min > score[i];)
                        {
                            min = score[i];
                        }
                        // temp
                        // if (i == (size - 1))
                        // {
                        //     cout << "min is : " << min;
                        // }
                    }
                    break;
                }
                // main => case 7 => case 3 => case 4
                case 4:
                {
                    clear(OS);
                    // data Type
                    const int size = 50;
                    int tempSize = 50;
                    float number[size];
                    // input data from user
                    for (int i = 0; i < size; i++)
                    {
                        cin >> number[i];
                    }
                    // for to for to for
                    for (int i = 0; i < size; i++)
                    {
                        for (int j = i + 1; j < size; j++)
                        {
                            if (number[i] == number[j])
                            {
                                for (int rep = j; rep < size; rep++)
                                {
                                    number[rep] = number[rep + 1];
                                }
                                tempSize--;
                            }
                        }
                    }
                    // print uniq array
                    for (int i = 0; i < tempSize; i++)
                    {
                        cout << number[i] << endl;
                    }
                    break;
                }
                }
            }
            // main => case 7 => case 4
            case 4:
            {
                string MenuTextC7C4 = R"(
                1.bakhs 1
                2.bakhs 2
                3.bakhs 3
                4.bakhs 4

        please choose number:
    )";
                cout << MenuTextC7C4;
                int MenuNumberC7C4;
                cin >> MenuNumberC7C4;

                // Switch Main ...
                switch (MenuNumberC7C4)
                {
                // main => case 7 => case 4 => case 1
                case 1:
                {
                    clear(OS);
                    int number[2][10];
                    // input data from user
                    for (int i = 0; i < 2; i++)
                    {
                        for (int j = 0; j < 10; j++)
                        {
                            cin >> number[i][j];
                        }
                    }

                    // jaam arrays
                    for (int i = 0, jam1 = 0, jam2 = 0; i < 10; i++)
                    {
                        jam1 += number[0][i];
                        jam2 += number[1][i];
                        if (i == 9)
                        {
                            if (jam1 == jam2)
                            {
                                cout << "equal";
                            }
                            else
                            {
                                cout << "unequal";
                            }
                        }
                    }
                    break;
                }
                // main => case 7 => case 4 => case 2
                case 2:
                {
                    clear(OS);
                    string text;
                    cin >> text;
                    int size = text.length();
                    for (int i = (size - 1); i >= 0; i--)
                    {
                        cout << text[i];
                    }

                    break;
                }
                // main => case 7 => case 4 => case 3
                case 3:
                {
                    clear(OS);
                    int num1, num2;
                    cin >> num1 >> num2;
                    for (int i = 1, count = 0; i <= num1; i++)
                    {
                        if (num1 % i == 0 && num2 % i == 0)
                        {
                            count++;
                            // cout << count << endl;
                        }
                        if (i == (num1))
                        {
                            cout << (num1 * num2) / count;
                        }
                    }
                    break;
                }
                // main => case 7 => case 4 => case 4
                case 4:
                {
                    clear(OS);
                    int num1, num2;
                    cin >> num1 >> num2;
                    string num1String = to_string(num1);
                    int size = num1String.length();
                    string Num1R = "";
                    for (int i = (size - 1); i >= 0; i--)
                    {
                        Num1R += num1String[i];
                        if (i == 0)
                        {
                            string Num2R = to_string(num2);
                            if (Num1R == Num2R)
                            {
                                cout << "Yes";
                            }
                            else
                            {
                                cout << "No";
                            }
                        }
                    }
                    break;
                }
                }
                break;
            }
            // main => case 7 => case 5
            case 5:
            {
                string MenuTextC7C5 = R"(
                1.bakhs 1
                2.bakhs 2
                3.bakhs 3

        please choose number:
    )";
                cout << MenuTextC7C5;
                int MenuNumberC7C5;
                cin >> MenuNumberC7C5;

                // Switch Main C7 => C5
                switch (MenuNumberC7C5)
                {
                // main => case case 7 => case 5 => case 1
                case 1:
                {
                    clear(OS);
                    int number;
                    cin >> number;
                    switch (number)
                    {
                    case 1:
                    {
                        cout << "ensani";
                        break;
                    }
                    case 2:
                    {
                        cout << "fani";
                        break;
                    }
                    case 3:
                    {
                        cout << "tarbiat badani";
                        break;
                    }
                    }
                    break;
                }
                // main => case case 7 => case 5 => case 2
                case 2:
                {
                    clear(OS);
                    int number;
                    cin >> number;
                    cout << "agha rez";
                    for (int i = 0; i < number; i++)
                    {
                        cout << "a";
                    }
                    break;
                }
                // main => case case 7 => case 5 => case 3
                case 3:
                {
                    clear(OS);
                    const int size = 6;
                    float ghad = 4.0;
                    float number[size];
                    for (int i = 0; i < size; i++)
                    {
                        cin >> number[i];
                    }

                    for (int i = 0, count = 0; i < size; i++)
                    {
                        for (int j = (i + 1); j < size; j++)
                        {
                            if (number[i] + number[j] > ghad)
                            {
                                count++;
                            }
                        }

                        if (i == (size - 1))
                        {
                            if (count >= 1)
                            {
                                cout << "no";
                            }
                            else
                            {
                                cout << "yes";
                            }
                        }
                    }
                    break;
                }
                }
                break;
            }
            }
            break;
        }
        // main => case8
        case 8:
        {
            clear(OS);
            string MenuTextC8 = R"(

                2.tamrin 2
                3.tamrin 3
                4.tamrin 4
                5.tamrin 5 

        please choose number:
    )";
            cout << MenuTextC8;
            int MenuNumberC8;
            cin >> MenuNumberC8;

            // Switch Main C8
            switch (MenuNumberC8)
            {
            // main => case 8 => case 2
            case 2:
            {
                string MenuTextC8C2 = R"(
                1.bakhs 1
                2.bakhs 2
                3.bakhs 3

        please choose number:
    )";
                cout << MenuTextC8C2;
                int MenuNumberC8C8;
                cin >> MenuNumberC8C8;

                // Switch Main C8 => C2
                switch (MenuNumberC8)
                {
                // main => case 8 => case 2 => case 1
                case 1:
                {
                    clear(OS);
                    int number;
                    cin >> number;
                    if (number > 0)
                    {
                        cout << number;
                    }
                    else
                    {
                        cout << -(number);
                    }

                    break;
                }
                // main => case 8 => case 2 => case 2
                case 2:
                {
                    clear(OS);
                    int number;
                    cin >> number;
                    const float p = 3.14;
                    cout << (number + number) * p << endl;
                    cout << (number * number) * p;

                    break;
                }
                // main => case 8 => case 2 => case 3
                case 3:
                {
                    clear(OS);
                    int number1, number2, number3;
                    cin >> number1 >> number2 >> number3;
                    cout << (number1 * 3600) + (number2 * 60) + (number3);

                    break;
                }
                }
                break;
            }
            // main => case 8 => case 3
            case 3:
            {
                string MenuTextC8C3 = R"(
                1.bakhs 1
                2.bakhs 2
                3.bakhs 3

        please choose number:
    )";
                cout << MenuTextC8C3;
                int MenuNumberC9C3;
                cin >> MenuNumberC9C3;

                // Switch Main C8 => C3
                switch (MenuNumberC9C3)
                {
                // main => case 8 => case 3 => case1
                case 1:
                {
                    clear(OS);
                    int number;
                    cin >> number;
                    for (int i = 0; i < number; i++)
                    {
                        int count = i + 1;
                        for (int j = 1; j <= count; j++)
                        {
                            cout << j;
                        }
                        cout << endl;
                    }
                    break;
                }
                // main => case 8 => case 3 => case2
                case 2:
                {
                    clear(OS);
                    int number;
                    cin >> number;
                    for (int sum = 0; number > 0;)
                    {
                        int temp = number % 10;
                        sum += temp;
                        number /= 10;
                        if (number == 0)
                        {
                            cout << sum;
                        }
                    }
                    break;
                }
                // main => case 8 => case 3 => case3
                case 3:
                {
                    clear(OS);
                    const int size = 10;
                    int tempSize = 50;
                    char chaR[size];

                    for (int i = 0; i < size; i++)
                    {
                        cin >> chaR[i];
                    }

                    for (int i = 0; i < size; i++)
                    {
                        for (int j = i + 1; j < size; j++)
                        {
                            if (chaR[i] == chaR[j])
                            {
                                for (int k = j; k < size; k++)
                                {
                                    chaR[k] = chaR[k + 1];
                                }
                                tempSize--;
                            }
                        }
                    }

                    for (int i = 0; i < tempSize; i++)
                    {
                        cout << chaR[i] << " ";
                    }
                    break;
                }
                }
                break;
            }
            // main =>  case 8 => case 4
            case 4:
            {
                string MenuTextC8C4 = R"(
                1.bakhs 1
                2.bakhs 2
                3.bakhs 3
                4.bakhs 4

        please choose number:
    )";
                cout << MenuTextC8C4;
                int MenuNumberC8C4;
                cin >> MenuNumberC8C4;

                // Switch Main C8 => C4
                switch (MenuNumberC8C4)
                {
                // main => case 8 => case 4 => case 1
                case 1:
                {
                    clear(OS);
                    int score;
                    cin >> score;

                    if (score >= 18)
                    {
                        cout << "A";
                    }
                    else if (score >= 16)
                    {
                        cout << "B";
                    }
                    else if (score >= 14)
                    {
                        cout << "C";
                    }
                    else if (score >= 12)
                    {
                        cout << "D";
                    }
                    else if (score >= 10)
                    {
                        cout << "E";
                    }
                    else
                    {
                        cout << "F";
                    }
                    break;
                }
                // main => case 8 => case 4 => case 2
                case 2:
                {
                    clear(OS);
                    int number;
                    cin >> number;
                    for (float i = 1, temp = 0; i < number; i++)
                    {
                        temp += 1 / i;
                        if (i == (number - 1))
                        {
                            cout << temp;
                        }
                    }
                    break;
                }
                // main => case 8 => case 4 => case 3
                case 3:
                {
                    clear(OS);
                    const int size = 12;
                    int numbers[size];
                    // input
                    for (int i = 0; i < size; i++)
                    {
                        cin >> numbers[i];
                    }

                    // print statis text
                    for (int i = 0, sum = 0; i < size; i++)
                    {
                        sum += numbers[i];

                        //
                        if (i == (size - 1))
                        {
                            cout << "sum = " << sum << endl;
                        }
                    }
                    // print sheet 3*4
                    for (int i = 0; i < size; i++)
                    {
                        cout << numbers[i] << " ";

                        if ((i + 1) == 4 || (i + 1) == 8 || (i + 1) == 12)
                        {
                            cout << endl;
                        }
                    }
                    break;
                }
                // main => case 8 => case 4 => case 4
                case 4:
                {
                    clear(OS);
                    const int size = 5;
                    int dup[size];
                    float num[size];

                    // input data from user
                    for (int i = 0; i < size; i++)
                    {
                        cin >> num[i];
                    }

                    // intializing dup array
                    for (int i = 0; i < size; i++)
                    {
                        dup[i] = 0;
                    }

                    // find duplicate
                    for (int i = 0; i < size; i++)
                    {
                        for (int j = 0; j < size; j++)
                        {
                            if (num[i] == num[j] && i != j)
                            {
                                dup[i]++;
                            }
                        }
                    }

                    // find max
                    int max = 0;
                    float valueLargger;
                    for (int i = 0; i < size; i++)
                    {
                        if (max < dup[i])
                        {
                            max = dup[i];
                            valueLargger = num[i];

                            // cout << valueLargger << ":" << i << endl;
                        }

                        // print valueLargger after find largger
                        if (i == (size - 1))
                        {
                            cout << valueLargger;
                        }
                    }
                    break;
                }
                }
                break;
            }
            // main =>  case 8 => case 5
            case 5:
            {
                string MenuTextC8C5 = R"(
                1.bakhs 1
                2.bakhs 2
                3.bakhs 3

        please choose number:
    )";
                cout << MenuTextC8C5;
                int MenuNumberC8C5;
                cin >> MenuNumberC8C5;

                // Switch Main C8 => C5
                switch (MenuNumberC8C5)
                {
                // main => case 8 => case 5 => case 1
                case 1:
                {
                    clear(OS);
                    string tempString1 = "", tempString2 = "";
                    int number, count = 1;
                    cin >> number;

                    for (int i = number; i > 1; i /= 10)
                    {
                        count++;
                    }
                    // temp
                    cout << count % 2 << endl;

                    // zoj
                    if (count % 2 == 0)
                    {
                        // temp
                        cout << "in zoje" << endl;
                        string numberString = to_string(number);

                        for (int i = 0; i < (count / 2); i++)
                        {
                            tempString1 += numberString[i];
                        }
                        for (int i = (count - 1); i > ((count / 2) - 1); i--)
                        {
                            tempString2 += numberString[i];
                        }

                        // temp cout << tempString1 << " - " << tempString2 << endl;

                        if (tempString1 == tempString2)
                        {
                            cout << "motagharen ast";
                        }
                        else
                        {
                            cout << "motagharen nist";
                        }
                    }
                    // mofrad
                    else
                    {
                        cout << "in farde" << endl;
                        string numberString = to_string(number);
                        int nimIntCount = count / 2;
                        for (int i = 0; i <= nimIntCount; i++)
                        {
                            tempString1 += numberString[i];
                        }
                        for (int i = (count - 1); i >= (nimIntCount); i--)
                        {
                            tempString2 += numberString[i];
                        }

                        // temp
                        cout << tempString1 << " - " << tempString2 << endl;

                        if (tempString1 == tempString2)
                        {
                            cout << "motagharen ast";
                        }
                        else
                        {
                            cout << "motagharen nist";
                        }
                    }
                    break;
                }
                // main => case 8 => case 5 => case 1
                case 2:
                {
                    clear(OS);
                    char m1, m2;
                    int bijanScore = 0, keyvanScore = 0;

                    for (; bijanScore != 3 && keyvanScore != 3;)
                    {
                        cin >> m1 >> m2;
                        runner(m1, m2, bijanScore, keyvanScore);
                        // cout << bijanScore << ":" << keyvanScore;
                    }

                    if (bijanScore == 3)
                    {
                        cout << "barande bijan";
                    }
                    else if (keyvanScore == 3)
                    {
                        cout << "barande keyvan";
                    }
                    break;
                }
                // main => case 8 => case 5 => case 1
                case 3:
                {
                    clear(OS);
                    const int size = 4, z = 3;
                    int sum[size];
                    int number[size][z];

                    // input data from user // 100% ok
                    for (int i = 0; i < size; i++)
                    {
                        for (int j = 0; j < z; j++)
                        {
                            cin >> number[i][j];
                        }
                    }

                    /*
                        cout << "---------------" << endl;
                        // temp
                        for (int i = 0; i < size; i++)
                        {
                            for (int j = 0; j < z; j++)
                            {
                                cout << number[i][j] << " ";
                            }
                            cout << endl;
                        }*/

                    // sum objects // need check

                    for (int i = 0; i < size; i++)
                    {
                        sum[i] = 0;
                    }

                    for (int i = 0; i < 4; i++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            sum[i] += number[i][j];
                        }
                    }

                    //
                    // sum[0] = number[0][0] + number[0][1] + number[0][2];
                    // sum[1] = number[1][0] + number[1][1] + number[1][2];
                    // sum[2] = number[2][0] + number[2][1] + number[2][2];
                    // sum[3] = number[3][0] + number[3][1] + number[3][2];

                    // temp
                    // cout << "---------------" << endl;
                    // for (int i = 0; i < size; i++)
                    // {
                    //     cout << sum[i] << endl;
                    // }

                    // find max
                    int max = sum[0];
                    for (int i = 1; i < size; i++)
                    {
                        if (sum[i] > max)
                        {
                            max = sum[i];
                        }

                        if (i == (size - 1))
                        {

                            if (max == sum[0])
                            {
                                cout << "Rahman";
                            }
                            else if (max == sum[1])
                            {
                                cout << "Siroos";
                            }
                            else if (max == sum[2])
                            {
                                cout << "Bijan";
                            }
                            else if (max == sum[3])
                            {
                                cout << "Keyvan";
                            }
                        }
                    }
                    break;
                }
                }
                break;
            }
            }
            break;
        }
            // main => case9
        case 9:
        {
            clear(OS);
            string MenuTextC9 = R"(
                1.char-amal-asli
                2.shomaresh
                3.Takhfif
                4.Zoj-Fard

        please choose number:
    )";
            cout << MenuTextC9;
            int MenuNumberC9;
            cin >> MenuNumberC9;

            // Switch Main ...
            switch (MenuNumberC9)
            {
            // main => case 9 => case 1
            case 1:
            {
                cout << "please inter numbers : \n sample 2 5" << endl;
                int number1, number2;
                cin >> number1 >> number2;

                cout << "reasult is :" << endl;
                cout << number1 + number2 << endl;
                cout << number1 - number2 << endl;
                cout << number1 * number2 << endl;
                cout << number1 / number2;
                break;
            }
            // main => case 9 => case 2
            case 2:
            {
                int number;
                cout << "please inter number:" << endl;
                cin >> number;
                if (number <= 9)
                {
                    cout << "yekan";
                }
                else if (number <= 99)
                {
                    cout << "dahgan";
                }
                else if (number <= 999)
                {
                    cout << "sadgan";
                }
                else
                {
                    cout << "we are supported three precision";
                }
                break;
            }
            // main => case 9 => case 3
            case 3:
            {
                float price, takhfif, takhfif2, total;
                cout << "please inter price:" << endl;
                cin >> price;
                cout << "please inter takhfif:" << endl;
                cin >> takhfif;
                takhfif2 = 1 - (takhfif / 100);
                total = takhfif2 * price;
                cout << total;
                break;
            }
            // main => case 9 => case 4
            case 4:
            {
                int number;
                cin >> number;
                if (number % 2 == 0)
                {
                    cout << "zoj";
                }
                else
                {
                    cout << "fard";
                }
                break;
            }
            }
            break;
        }
            // main => case10
        case 10:
        {
            clear(OS);
            string MenuTextC10 = R"(
                1.s1
                2.s2
                3.s3
                4.s4
                5.s5
                6.s6
                7.s7
                8.s8
                9.s9
                10.s10
                11.s11

        please choose number:
    )";
            cout << MenuTextC10;
            int MenuNumberC10;
            cin >> MenuNumberC10;

            // Switch Main C10
            switch (MenuNumberC10)
            {
            // main => case 8 => case 4
            case 4:
            {
                int n = 999;
                for (int i = n; i > 100; i -= 2)
                {
                    cout << i << endl;
                }
                break;
            }
            // main => case 8 => case 5
            case 5:
            {
                const int size = 10;
                int num[size];

                for (int i = 0; i < size; i++)
                {
                    cin >> num[i];
                }

                for (int i = 0, zoj = 0, fard = 0; i < size; i++)
                {
                    if (num[i] % 2)
                    {
                        zoj++;
                    }
                    else
                    {
                        fard++;
                    }

                    if (i == (size - 1))
                    {
                        cout << zoj << endl;
                        cout << fard;
                    }
                }
                break;
            }
            // main => case 8 => case 6
            case 6:
            {
                int number;
                cin >> number;

                m(number);
                return 0;
                break;
            }
            // main => case 8 => case 7
            case 7:
            {
                const int size = 7;
                float numbers[size];

                float sum = 0;
                for (int i = 0; i < size; i++)
                {
                    cin >> numbers[i];
                    sum += numbers[i];

                    if (i == (size - 1))
                    {
                        cout << sum;
                    }
                }
                break;
            }
            // main => case 8 => case 8
            case 8:
            {
                for (int i = 1; i <= 10; i++)
                {
                    for (int j = 1; j <= 10; j++)
                    {
                        cout << i * j << " ";
                    }
                    cout << endl;
                }
                break;
            }
            // main => case 8 => case 9
            case 9:
            {
                int number;
                cin >> number;
                cout << fact(number);
                return 0;
                break;
            }
            // main => case 8 => case 10
            case 10:
            {
                int n1, n2;
                cin >> n1 >> n2;
                int sum = m1(n1, n2);
                cout << sum;
                break;
            }
            // main => case 8 => case 11
            case 11:
            {
                cout << R"(
                خب بخش دوم سوال یازده
    int s = 40;
    int *ps = &s;
    // ++(*ps)
    cout << ++(*ps);
اگر دقت کنید * پشت اسمش داره اشاره میکنه که متغیر از نوع پوینتره
پس وقتی داریم یکی بهش اضافه میکنیم در واقع داریم به عدد داخل متغییر s یکی اضاف میکنیم

 
41

اما در خط بعدی داریم
    // ++(ps)
    cout << &s << endl;
    cout << ps << endl;
    cout << ++(ps);

اینجا داره 4 عدد به ادرس حافظه اضافه میشه چون پوینتر نیست و درواقع داره با ادرس سر و کله میزنه نه مقداری که داخل s هست این درواقع همون ادرس s عه

خروجی اش
0x5c295ffe84
0x5c295ffe84
0x5c295ffe88

❗️ این خطیه که به مشکل میخوره
    const int k = 88;
    int *pk = &k;
    // ++(*pk)
    cout << ++(*pk);
چرا ؟ چون مقدار k کانستنه
و غیرقابل تغییره
 output
ex6.cpp:17:15: error: invalid conversion from 'const int*' to 'int*' [-fpermissive]
   17 |     int *pk = &k;
      |               ^~
      |               |
      |               const int* 
خط بعدی هم موردی نداره چون داره با ادرس سر و کله میزنه نه مقداری که توشه
    // ++(ps)
    cout << &k << endl;
    cout << pk << endl;
    cout << ++(pk);
خروجیش
0x20ec5ffc84
0x20ec5ffc84
0x20ec5ffc88
            )";
                break;
            }
            }
            break;
        }

            struct list
            {
                string question;
                string answer;
                string correct_note;
                bool cnflag;
                bool flag;
            };

        // case 11
        case 11:
        {
            clear(OS);
            clear(OS);
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
        }
        case 12:
        {
            clear(OS);
            cout << R"(

                - Easy questions :
                1. s1 (khanei dost)
                2. s2 (shesh sang)
                3. s3 (class daneshgah azad)
                4. s4 (reshteh checker)

                - Medium questions :
                5. s5 (char adad)
                6. s6 (kase & nokhod)
                7. s7 (test binaei)
                8. s8 (rezhime sakht)

                - Hight qurstions
                9. s9 (jadvad dekarti)
                10. s10 (karmand ziadi)
                11. s11 (bolandgo)
                12. s12 (adad chap kon)

                please choose number:
            )";

            int Qnumber;
            cin >> Qnumber;

            switch (Qnumber)
            {
            case 1:

            {
                int side;
                cin >> side;
                cout << side * side;
                break;
            }
            case 2:
            {
                const int size = 6;
                string name[size] = {"space", "mind", "reality", "power", "time", "soul"};
                string answers[size] = {"blue", "yellow", "red", "purple", "green", "orange"};
                string myName;
                cin >> myName;
                for (int i = 0; i < size; i++)
                {
                    if (myName == name[i])
                    {
                        cout << answers[i];
                    }
                }
                break;
            }
            case 3:
            {
                string text;
                cin >> text;

                cout << "Building : " << text[3] << endl;
                cout << "Floor : " << text[2] << endl;
                cout << "Class: " << text[0] << text[1] << text[2];
                break;
            }
            case 4:
            {
                string text1, text2;
                cin >> text1 >> text2;
                int size2 = text2.length();

                if (text1[0] == text2[size2 - 1])
                {
                    cout << "YES";
                }
                else
                {
                    cout << "NO";
                }
                break;
            }
            case 5:
            {
                const int size = 4;
                int numbers[size], ender;
                int count = 0;
                cin >> ender;
                for (int i = 0; i < size; i++)
                {
                    cin >> numbers[i];
                }

                for (int i = 1; i <= ender; i++)
                {
                    if (i % numbers[0] == 0 || i % numbers[1] == 0 || i % numbers[2] == 0 || i % numbers[3] == 0)
                    {
                        count++;
                    }
                }
                cout << count;
                break;
            }
            case 7:
            {
                string text1, text2;
                int length, count = 0;
                cin >> length >> text1 >> text2;
                for (int i = 0; i < length; i++)
                {
                    if (text1[i] != text2[i])
                    {
                        count++;
                    }
                }
                cout << count;
                break;
            }
            case 8:
            {
                int red = 0, yellow = 0;
                string text;
                cin >> text;
                int size = text.length();
                for (int i = 0; i < size; i++)
                {
                    // count red and yellow labels
                    if (text[i] == 'R')
                    {
                        red++;
                    }
                    if (text[i] == 'Y')
                    {
                        yellow++;
                    }
                }

                // assassment labels
                if (red >= 3)
                {
                    cout << "nakhor lite";
                }
                else if (red >= 2 && yellow >= 2)
                {
                    cout << "nakhor lite";
                }
                else if (red + yellow == 5)
                {
                    cout << "nakhor lite";
                }
                else
                {
                    cout << "rahat baash";
                }
                break;
            }
            case 9:
            {
                int n1, n2;
                cin >> n1 >> n2;
                for (int i = 0; i < n1; i++)
                {
                    for (int j = 0; j < n2; j++)
                    {
                        cout << " _";
                    }
                    cout << endl;
                    for (int k = 0; k < (n2 + 1); k++)
                    {
                        cout << "| ";
                    }
                    cout << endl;
                    if (i == (n1 - 1))
                    {
                        for (int i = 0; i < n2; i++)
                        {
                            cout << " _";
                        }
                    }
                }
                break;
            }
            case 10:
            {
                int size;
                cin >> size;
                cin.ignore();
                string *full_names = new string[size];

                // input data from user
                for (int i = 0; i < size; i++)
                {
                    getline(cin, full_names[i]);
                }

                string *first_names = new string[size];
                for (int i = 0; i < size; i++)
                {
                    first_names[i] = "";
                }

                // export first names
                for (int i = 0; i < size; i++)
                {
                    string temp = full_names[i];
                    for (int j = 0; temp[j] != ' ' && temp[j] != '\0'; j++)
                    {
                        first_names[i] += temp[j];
                    }
                }

                // count array for first names
                int *count = new int[size];
                for (int i = 0; i < size; i++)
                {
                    count[i] = 1;
                }

                // counting
                for (int i = 0; i < size; i++)
                {
                    for (int j = 0; j < size; j++)
                    {
                        if (first_names[i] == first_names[j] && i != j)
                        {
                            count[i]++;
                        }
                    }
                }

                // remove duplicate
                int max = count[0];
                for (int i = 0; i < size; i++)
                {
                    if (max < count[i])
                    {
                        max = count[i];
                    }
                }

                cout << max;

                delete[] full_names;
                delete[] first_names;
                break;
            }
            case 11:
            {
                string text;
                cin >> text;
                int size = text.length();

                for (int i = 0; i < size; i++)
                {

                    for (int k = 0; k < i; k++)
                    {
                        cout << text[i];
                    }
                    for (int j = i; j < size; j++)
                    {
                        cout << text[j];
                    }
                    cout << endl;
                }
                break;
            }
            case 12:
            {
                string number;
                cin >> number;
                int size = number.length();

                for (int i = 0; i < size; i++)
                {
                    cout << number[i] << ": ";
                    for (int j = 0; j < number[i]; j++)
                    {
                        cout << number[i];
                    }
                    cout << endl;
                }
                break;
            }
            }
            break;
        }

        case 13:
        {
            clear(OS);
            cout << R"(
                1.zoj ya fard
                2.tol se parekhat
                3.adad bakhsh pazir b 3 ya 5
                4.kocheck tarin / bozorg tarin
                5.adad roz o mah
                6.roz hafteh
                7.roz switch
                8.fasl
                9.fasl switch
                10.mokhtasat
                11.sherkat
                12.tavarom
                13.baze zamani
                14.hoghogh
                15.sen
                16.personel
                17.sard tarin
                18.array nomreh
                19.nomreh
                20.aval
                21.fibo
                22.oto
                23.pool
                24.sang
                25.mosalas
                26.nood
                27.array bozorg tareh
                28.tekrar
                29.dooz
                30.salary

                please choose number :
            )";
            int Snumber;
            cin >> Snumber;

            switch (Snumber)
            {
            case 1:
            {
                int number;
                cout << "Enter a number: ";
                cin >> number;
                if (number % 2 == 0)
                {
                    cout << "Zoj";
                }
                else
                {
                    cout << "Fard";
                }
                _getch();
                break;
            }
            case 2:
            {
                int x, y, z;
                cout << "Enter x: ";
                cin >> x;
                cout << "Enter y: ";
                cin >> y;
                cout << "Enter z: ";
                cin >> z;
                system("cls");
                if (x + y > z && x + z > y && z + y > x)
                {
                    cout << "Yes";
                }
                else
                {
                    cout << "No";
                }
                _getch();
                break;
            }
            case 3:
            {
                int number;
                cout << "Enter a number: ";
                cin >> number;
                if (number % 3 == 0 || number % 5 == 0)
                {
                    cout << "Yes";
                }
                else
                {
                    cout << "No";
                }
                _getch();
                break;
            }
            case 4:
            {
                int n1, n2, n3, Max, Min;
                cout << "Enter Number 1: ";
                cin >> n1;
                cout << "Enter Number 2: ";
                cin >> n2;
                cout << "Enter Number 3: ";
                cin >> n3;
                Max = Min = n1;
                if (n2 > Max)
                {
                    Max = n2;
                }
                if (n3 > Max)
                {
                    Max = n3;
                }
                if (n2 < Min)
                {
                    Min = n2;
                }
                if (n3 < Min)
                {
                    Min = n3;
                }
                cout << "Max = " << Max << "\tMin = " << Min;
                _getch();
                break;
            }
            case 5:
            {
                int day, month, result;
                cout << "Enter month: ";
                cin >> month;
                cout << "Enter day: ";
                cin >> day;
                if (month <= 6 && day <= 31 && day > 0 && month > 0) // در 6 ماه اول
                {
                    result = (month - 1) * 31 + day;
                    cout << "Dar " << result << " Omin rooz sal hastim";
                }

                if (month > 6 && month <= 12 && day > 0 && day <= 30) // در 6 ماه دوم
                {
                    result = (6 * 31) + (month - 6 - 1) * 30 + day;
                    cout << "Dar " << result << " Omin rooz sal hastim";
                    // result = (month - 1) * 30 + day + 6;
                }

                if (month > 12 || month < 1 || day > 31 || day < 1)
                {
                    cout << "Error!!!!!!!!!!!!!!!!!";
                }
                break;
            }
            case 6:
            {
                int number;
                cout << "Enter a number: ";
                cin >> number;
                if (number == 1)
                {
                    cout << "Shanbe";
                }
                else if (number == 2)
                {
                    cout << "Yekshanbe";
                }
                else if (number == 3)
                {
                    cout << "Doshanbe";
                }
                else if (number == 4)
                {
                    cout << "Seshanbe";
                }
                else if (number == 5)
                {
                    cout << "Charshanbe";
                }
                else if (number == 6)
                {
                    cout << "Panjshanbe";
                }
                else if (number == 7)
                {
                    cout << "Fitile jome tatile :))))))))";
                }
                else
                {
                    cout << "Error!!!!!!!!!!!!!!!!";
                }
                _getch();
                break;
            }
            case 7:
            {
                int number;
                cout << "Enter a number: ";
                cin >> number;
                switch (number)
                {
                case 1:
                    cout << "Shanbe";
                    break;

                case 2:
                    cout << "Yekshanbe";
                    break;

                case 3:
                    cout << "Doshanbe";
                    break;

                case 4:
                    cout << "Seshanbe";
                    break;

                case 5:
                    cout << "Charshanbe";
                    break;

                case 6:
                    cout << "Panjshanbe";
                    break;

                case 7:
                    cout << "Fitile jome tatile :))))))))";
                    break;

                default:
                    cout << "Error!!!!!!!!!!!!!!!!";
                }

                _getch();
                break;
            }
            case 8:
            {
                int number;
                cout << "Enter a number: ";
                cin >> number;
                if (number == 1)
                {
                    cout << "Bahar";
                }
                else if (number == 2)
                {
                    cout << "Tabestan";
                }
                else if (number == 3)
                {
                    cout << "Paeez";
                }
                else if (number == 4)
                {
                    cout << "Zemestan";
                }
                else
                {
                    cout << "Error!!!!!!!!!!!!!!!!";
                }
                _getch();
                break;
            }
            case 9:
            {
                int number;
                cout << "Enter a number: ";
                cin >> number;
                switch (number)
                {
                case 1:
                    cout << "Bahar";
                    break;

                case 2:
                    cout << "Tabestan";
                    break;

                case 3:
                    cout << "Paeez";
                    break;

                case 4:
                    cout << "Zemestan";
                    break;

                default:
                    cout << "Error!!!!!!!!!!!!!!!!";
                }

                _getch();
                break;
            }
            case 10:
            {
                int x1, x2, y1, y2;
                float d;

                cout << "Enter x1, y1: ";
                cin >> x1 >> y1;
                cout << "Enter x2, y2: ";
                cin >> x2 >> y2;

                d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

                cout << "Distance = " << d;

                _getch();

                break;
            }
            case 11:
            {
                float a4, pen, t, coste;

                cout << "Enter A4 and pen price: ";
                cin >> a4 >> pen;
                cout << "Enter t: ";
                cin >> t;

                coste = 50 * pen * t / 100 + 150 * a4 * t / 100;

                cout << "Extra cost is " << coste;

                _getch();
                break;
            }
            case 12:
            {
                double t, y1, y2, y3;
                cout << "Enter price for 2 years: ";
                cin >> y1 >> y2;

                t = (y2 - y1) / y1;
                y3 = y1 + y2 * t;

                cout << "Inflation: %" << t << "\t\t price in next year: " << y3;

                _getch();
                break;
            }
            case 13:
            {
                int hour1, minute1, hour2, minute2;
                ;

                cout << "Enter first time (hh mm): ";
                cin >> hour1 >> minute1;

                cout << "Enter second time (hh mm): ";
                cin >> hour2 >> minute2;

                int time1InMinutes = hour1 * 60 + minute1;
                int time2InMinutes = hour2 * 60 + minute2;

                int timeDifferenceInMinutes = time2InMinutes - time1InMinutes;

                int hoursDifference = timeDifferenceInMinutes / 60;
                int minutesRemaining = timeDifferenceInMinutes % 60;

                cout << "Time difference is: " << hoursDifference << " hours and " << minutesRemaining << " minutes" << endl;

                _getch();
                break;
            }
            case 14:
            {
                double salary, salary_received, insurance = 0.07, tax = 0.1; // Why double? | Why 0.07 & 0.1?

                cout << "Enter salary: ";
                cin >> salary;

                insurance = salary * insurance;
                tax = salary * tax;

                salary_received = salary - insurance - tax;

                cout << "Insurance = " << insurance << "\t Tax = " << tax << endl;
                cout << "Salary received = " << salary_received;

                _getch();
                break;
            }
            case 15:
            {
                double ss = 31560000, second; // or ss = 3.156e7
                int age;

                cout << "Enter Age: ";
                cin >> age;

                second = age * ss;

                cout << "Second = " << second << endl;

                system("pause"); // or _getch if the conio.h library is called
                break;
            }
            case 16:
            {
                int numEmployees;
                double hourlyRate;

                cout << "Enter the number of employees: ";
                cin >> numEmployees;

                cout << "Enter hourly rate: ";
                cin >> hourlyRate;

                for (int i = 0; i < numEmployees; ++i)
                {
                    int employeeID;
                    double workedHours;

                    cout << "Enter Employee ID: ";
                    cin >> employeeID;

                    cout << "Enter worked hours: ";
                    cin >> workedHours;

                    double totalPayment = hourlyRate * workedHours;

                    if (workedHours > 40)
                    {
                        double overtimeHours = workedHours - 40;
                        totalPayment += (overtimeHours * hourlyRate * 3 / 2);
                    }

                    cout << "Employee ID: " << employeeID << endl;
                    cout << "Total payment: $" << totalPayment << endl;
                    cout << endl;
                }

                _getch();
                break;
            }
            case 17:
            {
                float a[30], sum = 0, avr = 0, n, c = 0;
                for (int i = 0; i < 30; i++)
                {
                    cout << "nomre " << i + 1 << " om: ";
                    cin >> a[i];
                    sum = sum + a[i];
                }
                avr = sum / 30;
                cout << "1- Avrage= " << avr << endl;
                cout << "2- enter Your Number: ";
                cin >> n;
                for (int j = 0; j < 30; j++)
                {
                    if (n < a[j])
                        ++c;
                }
                cout << "2- Score More Than " << n << " = " << c;
                break;
            }
            case 18:
            {
                int a[40], min = 1000, cindex;
                for (int i = 0; i < 40; i++)
                {
                    cout << "Degree City " << i + 1 << ": ";
                    cin >> a[i];
                    if (a[i] < min)
                    {
                        min = a[i];
                        cindex = i;
                    }
                }
                cout << "1- Index of Coldest= " << cindex << endl;
                cout << "2- Degree of Coldest= " << min << endl;
                for (int j = 39; j >= 0; j--)
                {
                    cout << "City[" << j + 1 << "]=" << a[j] << "\t";
                }
                break;
            }
            case 19:
            {
                int a[2][10], n, s;
                for (int i = 0; i < 10; i++)
                {
                    cout << "StdNo " << i + 1 << ": ";
                    cin >> a[0][i];
                    cout << "Nomre " << i + 1 << ": ";
                    cin >> a[1][i];
                }
                cout << "Your STDNO= ";
                cin >> n;

                cout << "StdNo\tNomre" << endl;
                for (int j = 0; j < 10; j++)
                {
                    cout << a[0][j] << "\t" << a[1][j] << endl;
                    if (a[0][j] == n)
                        s = a[1][j];
                }
                cout << endl
                     << "\t Youre Score = " << s;
                break;
            }
            case 20:
            {
                int n1, n2;

                cout << "Enter two numbers: ";
                cin >> n1 >> n2;

                if (n1 < 2)
                {
                    n1 = 2;
                }

                for (int i = n1; i <= n2; i++)
                {
                    bool is_prime = true;

                    for (int j = 2; j * j <= i; j++)
                    {
                        if (i % j == 0)
                        {
                            is_prime = false;
                            break;
                        }
                    }

                    if (is_prime && i != 1)
                    {
                        cout << i << "\t";
                    }
                }

                _getch();
                break;
            }
            case 21:
            {
                int num;
                bool isFibonacci = false;

                cout << "Enter a number: ";
                cin >> num;

                int a = 0, b = 1, nextTerm = a + b;
                while (nextTerm <= num)
                {
                    if (nextTerm == num)
                    {
                        isFibonacci = true;
                        break;
                    }
                    a = b;
                    b = nextTerm;
                    nextTerm = a + b;
                }

                if (isFibonacci)
                {
                    cout << num << " is part of the Fibonacci sequence." << endl;
                }
                else
                {
                    cout << num << " is not part of the Fibonacci sequence." << endl;
                }

                _getch();
                break;
            }
            case 22:
            {
                long int cost;

                cout << "Enter cost: ";
                cin >> cost;

                for (int i = 1; i <= 10; i++)
                {
                    cost -= cost * 0.2;
                    cout << "Cost for " << i << " year(s) later = " << cost << endl;
                }

                _getch();
                break;
            }
            case 23:
            {
                int sum;
                cout << "Result is (500 200 100 50): " << endl;
                for (int i = 0; i <= 2; i++)
                {
                    for (int j = 0; j <= 5; j++)
                    {
                        for (int k = 0; k <= 10; k++)
                        {
                            for (int m = 0; m <= 20; m++)
                            {
                                sum = m * 50 + k * 100 + j * 200 + i * 500;
                                if (sum == 1000)
                                {
                                    cout << "(" << i << ", " << j << ", " << k << ", " << m << ") \t";
                                }
                            }
                        }
                    }
                }
                _getch();
                break;
            }
            case 24:
            {
                int player1, player2, score1 = 0, score2 = 0;

                for (int i = 1; i <= 5; i++)
                {
                    cout << "Player 1 => 1 | 2 | 3 : ";
                    cin >> player1;
                    cout << "Player 2 => 1 | 3 | 3 : ";
                    cin >> player2;

                    if ((player1 == 1 && player2 == 3) || (player1 == 3 && player2 == 2) || (player1 == 2 && player2 == 1))
                        score1++;

                    else if ((player2 == 1 && player1 == 3) || (player2 == 3 && player1 == 2) || (player2 == 2 && player1 == 1))
                        score2++;
                }

                cout << "Score for player 1 = " << score1 << endl;
                cout << "Score for player 2 = " << score2;

                _getch();
                break;
            }
            case 25:
            {
                int n;
                cin >> n;
                for (int i = 1; i <= n; i++)
                {
                    for (int j = 1; j <= i; j++)
                    {
                        cout << " " << i;
                    }
                    cout << endl;
                }
                _getch();
                break;
            }
            case 26:
            {
                int num1[100][100], n;

                cout << "Enter n:";
                cin >> n;

                n = n - 1;

                read(num1, n);

                cout << "Primary array is \n";

                print(num1, n);
                rotate(num1, n);

                cout << "Rotated array is \n";

                print(num1, n);

                _getch();
                return 0;
                break;
            }
            case 27:
            {
                int a[4][5] = {0};

                readarray(a);
                findmaxrow(a);

                cout << "\t*****result*****";

                writearray(a);

                _getch();
                break;
            }
            case 28:
            {
                int a[100], repeat[100] = {0}, max = 0, index_max, n;

                cout << "Enter Array size: ";
                cin >> n;

                cout << "Enter Element of Array: ";
                for (int i = 0; i < n; i++)
                    cin >> a[i];

                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                        if (a[i] == a[j])
                            repeat[i]++;
                    if (repeat[i] > max)
                    {
                        max = repeat[i];
                        index_max = i;
                    }
                }

                cout << a[index_max];

                _getch();
                break;
            }
            case 29:
            {
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        board[i][j] = ' ';
                    }
                }

                char currentPlayer = 'X';
                int row, col;
                bool gameOver = false;

                while (!gameOver)
                {
                    system("cls");

                    cout << "Player: " << currentPlayer << endl;
                    displayBoard();
                    cout << "Row number(0-2): ";
                    cin >> row;
                    cout << "Column number(0-2): ";
                    cin >> col;

                    if (makeMove(row, col, currentPlayer))
                    {
                        if (checkWin(currentPlayer))
                        {
                            displayBoard();
                            cout << "Plater " << currentPlayer << " Win" << endl;
                            gameOver = true;
                        }
                        else
                        {
                            if (currentPlayer == 'X')
                            {
                                currentPlayer = 'O';
                            }
                            else
                            {
                                currentPlayer = 'X';
                            }
                        }
                    }
                    else
                    {
                        cout << "Invalid!" << endl;
                    }
                }

                _getch();
            }
            }
            break;
        }
        }
    } while (Exit());
    return 0;
}

string getOsName()
{
#ifdef _WIN32
    string OS = "Windows 32-bit";
#elif _WIN64
    string OS = "Windows 64-bit";
#elif __APPLE__ || __MACH__
    string OS = "Mac OSX";
#elif __linux__
    string OS = "Linux";
#elif __FreeBSD__
    string OS = "FreeBSD";
#elif __unix || __unix__
    string OS = "Unix";
#else
    string OS = "Other";
#endif
    return OS;
}

int clear(string OS)
{
    if (OS == "Windows 32-bit")
    {
        int clear = system("cls");
        return clear;
    }
    else if (OS == "Mac OSX")
    {
        int clear = system("clear");
        return clear;
    }
    else if (OS == "Linux")
    {
        int clear = system("clear");
        return clear;
    }
    else if (OS == "FreeBSD")
    {
        int clear = system("clear");
        return clear;
    }
    else if (OS == "Unix")
    {
        int clear = system("clear");
        return clear;
    }
    else if (OS == "Other")
    {
        int clear = system("clear");
        return clear;
    }
}

int runner(char m1, char m2, int &bijanScore, int &keyvanScore)
{
    // mosavi
    if ((m1 == 'k' && m2 == 'k') || (m1 == 's' && m2 == 's') || (m1 == 'g' && m2 == 'g'))
    {
    }
    // bjan winner
    else if ((m1 == 's' && m2 == 'g') || (m1 == 'k' && m2 == 's') || m1 == 'g' && m2 == 'k')
    {
        bijanScore++;
    }
    // keyvan winner
    else if ((m1 == 'g' && m2 == 's') || (m1 == 's' && m2 == 'k') || (m1 == 'k' && m2 == 'g'))
    {
        keyvanScore++;
    }
    // invalid number
    else
    {
        cout << "invalid !!";
    }

    return 0;
}

void m(int number)
{
    for (int i = number; i > 0; i--)
    {
        if (number % i == 0)
        {
            cout << i << endl;
        }
    }
}

int fact(int number)
{
    if (number == 0)
    {
        return (1);
    }
    return (number * fact(number - 1));
}

int m1(int n1, int n2)
{
    int sum = n1 * n2;
    return sum;
}

bool Exit()
{
    cout << R"(
------------------
please select 
Press any key to return Main menu
or Type exit / E to exit ! : )";

    int ExitKeySwitch;
    string ExitKey;
    cin >> ExitKey;
    if (ExitKey == "exit" || ExitKey == "E")
    {
        ExitKeySwitch = 1;
    }
    switch (ExitKeySwitch)
    {
    case 1:
    {
        return false;
    }
    default:
    {
        return true;
    }
    }
}

void rotate(int a[100][100], int n)
{
    int b[100][100];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            b[j][n - i] = a[i][j];
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            a[i][j] = b[i][j];
        }
    }
}

void read(int a[100][100], int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << "Enter " << n + 1 << " numbers for row " << i + 1 << " : ";
        for (int j = 0; j <= n; j++)
            cin >> a[i][j];
    }
}

void print(int a[100][100], int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}

void readarray(int a[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter row(" << i + 1 << "): ";

        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
}

void findmaxrow(int a[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        a[i][4] = a[i][0];
        for (int j = 1; j < 4; j++)
            if (a[i][4] < a[i][j])
            {
                a[i][4] = a[i][j];
            }
    }
}

void writearray(int a[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << "   " << a[i][j];
        }
        cout << "\t   " << a[i][4];
    }
}

void displayBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkWin(char player)
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }

    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

bool makeMove(int row, int col, char player)
{
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ')
    {
        board[row][col] = player;
        return true;
    }
    return false;
}
