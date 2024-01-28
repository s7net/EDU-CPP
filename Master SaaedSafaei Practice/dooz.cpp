#include <iostream>
#include <conio.h>
using namespace std;

char board[3][3];

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

bool checkWin(char player) {
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

int main() 
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
	return 0;
}
