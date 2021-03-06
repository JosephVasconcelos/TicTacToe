// ticTacToe.cpp : Defines the entry point for the console application.
// Author: Joseph M. Vasconcelos 

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;
char tictactoe[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char currentPlayer = 'X';
int numMoves = 0;

void DrawBoard(); 
void SetNextPlayer();
void PlayerTurn();
char WIN();

int main()
{
	numMoves = 0;
	cout << "welcome to our tic tac toe game" << endl;
	cout << " Player 1 will be X's and Player 2 will be O's... Lets Play!" << endl;
	cout << endl;
	DrawBoard();
	while (1)
	{
		numMoves++;
		DrawBoard();
		SetNextPlayer();
		if (WIN() == 'X')
		{
			
			cout << " x wins !" << endl;
			break;
		}
		else if (WIN() == 'O')
		{
			cout << " o wins!" << endl;;
			break;
		}
		else if (WIN() == 'draw' && numMoves == 9)
		{
			cout << "its a draw! " << endl;
			break;
		}
		PlayerTurn();
		
	}
	system("PAUSE");

    return 0;
}
void DrawBoard()
{
	system("cls");
	cout << "Joe's Tic Tac Toe" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j= 0; j < 3; j++)
		{
			cout << tictactoe[i][j] << " ";
		}
	
		cout << endl;

	}
}
void SetNextPlayer()
{
	int a;
	cout << "choose your space: ";
	cin >> a;
	cout << endl;

	if (a == 1)
	{
		if (tictactoe[0][0] == '1')
			tictactoe[0][0] = currentPlayer;
		else
		{
			cout << "that spot is taken! try again" << endl;
			SetNextPlayer();
		}
	}
	else if (a == 2)
	{
		if (tictactoe[0][1] == '2')
			tictactoe[0][1] = currentPlayer;
		else
		{
			cout << "that spot is taken! try again" << endl;
			SetNextPlayer();
		}
	}
	else if (a == 3)
	{
		if (tictactoe[0][2] == '3')
			tictactoe[0][2] = currentPlayer;
		else
		{
			cout << "that spot is taken! try again" << endl;
			SetNextPlayer();
		}
	}

	else if (a == 4)
	{
		if (tictactoe[1][0] == '4')
			tictactoe[1][0] = currentPlayer;
		else
		{
			cout << "that spot is taken! try again" << endl;
			SetNextPlayer();
		}
	}
	else if (a == 5)
	{
		if (tictactoe[1][1] == '5')
			tictactoe[1][1] = currentPlayer;
		else
		{
			cout << "that spot is taken! try again" << endl;
			SetNextPlayer();
		}
	}
	
	else if (a == 6)
	{
		if (tictactoe[1][2] == '6')
			tictactoe[1][2] = currentPlayer;
		else
		{
			cout << "that spot is taken! try again" << endl;
			SetNextPlayer();
		}
	}
	else if (a == 7)
	{
		if (tictactoe[2][0] == '7')
			tictactoe[2][0] = currentPlayer;
		else
		{
			cout << "that spot is taken! try again" << endl;
			SetNextPlayer();
		}
	}

	else if (a == 8)
	{
		if (tictactoe[2][1] == '8')
			tictactoe[2][1] = currentPlayer;
		else
		{
			cout << "that spot is taken! try again" << endl;
			SetNextPlayer();
		}
	}

	else if (a == 9)
	{
		if (tictactoe[2][2] == '9')
			tictactoe[2][2] = currentPlayer;
		else
		{
			cout << "that spot is taken! try again" << endl;
			SetNextPlayer();
		}
	}
}
void PlayerTurn()
{
	if (currentPlayer == 'X')
		currentPlayer = 'O';
	else
		currentPlayer = 'X';
}
char WIN()
{
	// first player
	if (tictactoe[0][0] == 'X' && tictactoe[0][1] == 'X' && tictactoe[0][2] == 'X')
		return 'X';
	if (tictactoe[1][0] == 'X' && tictactoe[1][1] == 'X' && tictactoe[1][2] == 'X')
		return 'X';
	if (tictactoe[2][0] == 'X' && tictactoe[2][1] == 'X' && tictactoe[2][2] == 'X')
		return 'X';
	
	if (tictactoe[0][0] == 'X' && tictactoe[1][0] == 'X' && tictactoe[2][0] == 'X')
		return 'X';
	if (tictactoe[0][1] == 'X' && tictactoe[1][1] == 'X' && tictactoe[2][1] == 'X')
		return 'X';
	if (tictactoe[0][2] == 'X' && tictactoe[1][2] == 'X' && tictactoe[2][2] == 'X')
		return 'X';

	// check diag
	if (tictactoe[0][0] == 'X' && tictactoe[1][1] == 'X' && tictactoe[2][2] == 'X')
		return 'X';	
	if (tictactoe[2][0] == 'X' && tictactoe[1][1] == 'X' && tictactoe[0][2] == 'X')
		return 'X';
	// second player
	if (tictactoe[0][0] == 'O' && tictactoe[0][1] == 'O' && tictactoe[0][2] == 'O')
		return 'O';
	if (tictactoe[1][0] == 'O' && tictactoe[1][1] == 'O' && tictactoe[1][2] == 'O')
		return 'O';
	if (tictactoe[2][0] == 'O' && tictactoe[2][1] == 'O' && tictactoe[2][2] == 'O')
		return 'O';

	if (tictactoe[0][0] == 'O' && tictactoe[1][0] == 'O' && tictactoe[2][0] == 'O')
		return 'O';
	if (tictactoe[0][1] == 'O' && tictactoe[1][1] == 'O' && tictactoe[2][1] == 'O')
		return 'O';
	if (tictactoe[0][2] == 'O' && tictactoe[1][2] == 'O' && tictactoe[2][2] == 'O')
		return 'O';

	// check diag
	if (tictactoe[0][0] == 'O' && tictactoe[1][1] == 'O' && tictactoe[2][2] == 'O')
		return 'O';
	if (tictactoe[2][0] == 'O' && tictactoe[1][1] == 'O' && tictactoe[0][2] == 'O')
		return 'O';

	return 'draw';
	
}


