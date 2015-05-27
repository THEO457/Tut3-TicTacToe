#ifndef tictactoe_h
#define tictactoe_h

class TicTacToe {
private:
	char board[3][3];
public:
	void Draw();
	void Print();
	void Move(int move);
	void Player(char competitor);
	bool If_Draw();
};
#endif
