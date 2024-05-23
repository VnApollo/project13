#include "View.h"
// in bàn cờ
void View::displayBoard(Board& board)
{
	for (int i = 0; i < board.get_w(); i++) {
		for (int j = 0; j < board.get_h(); j++) {
			cout << board.get_arr(i, j);
			cout << "|";
		}
		cout << endl;
		for (int i = 0; i < board.get_h(); i++) {
			cout << "--";
		}
		cout << endl;
	}
}

//hiển thị người chiến thắng khi kết thúc trò chơi

void View::endgame(Player pl)
{
	cout << "Player: " << pl.getName() << " is winner!\n";

}

void View::displayMessage(string& message)
{
	std::cout << message << endl;

}
