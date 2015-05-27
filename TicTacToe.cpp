#include <iostream>
#include "TicTacToe.h"
using namespace std;

int main() {
	TicTacToe game;
	char competitor = 'X';
	while (game.If_Draw() == false) {
		game.Draw();
		game.Print();
		game.Move(competitor);
		game.Player(competitor);
	}
	system("pause");
}
