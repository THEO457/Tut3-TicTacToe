#include <iostream>
#include "TicTacToe.h" 
using namespace std;

void TicTacToe::Print() {
	for (int i = 0; i < 9; i++){
 board[i / 3][i % 3] = '1'+i;
	}
	
}

void TicTacToe::Draw() {
	system("cls");
	cout << "\tThe Tic Tac Toe game!\n";
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}

void TicTacToe::Move(int move){
	char competitor = 'X';
	cout << "\nEnter the number of position you would to move:\n";
	cin >> move;
	if (move == 1){
		board[0][0] = competitor;
	}
	else if (move == 2){ 
		board[0][1] = competitor;
	}
	else if (move == 3){
		board[0][2] = competitor;
	}
	else if (move == 4){
		board[1][0] = competitor;
	}
	else if (move == 5){
		board[1][1] = competitor;
	}
	else if (move == 6){
		board[1][2] = competitor;
	}
	else if (move == 7){
		board[2][0] = competitor;
	}
	else if (move == 8){
		board[2][1] = competitor;
	}
	else if (move == 9){
		board[2][2] = competitor;
	}
}

void TicTacToe::Player(char competitor) {
	if (competitor == 'X')
		competitor = 'O';
	else if (competitor == 'O')
		competitor = 'X';
}

bool TicTacToe::If_Draw() {
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++) {
			if (board[i][j] == 'X' && board[i][j] == 'O')
				return true;
			else
				return false;
		}
	}
}
