#include <iostream>
#include <conio.h>
using namespace std;

int main()
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
	return 0;
}