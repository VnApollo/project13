#ifndef PLAYERMODEL_H
#define PLAYERMODEL_H

#include <iostream>
#include <string>
#include "Board.h"
#include "Controller.h"
#include <fstream>


using namespace std;

class Player {
private:
	string name;
	char kh;
	int win = 0;
	int lose = 0;
	int draw=0;
public:
	Player();
	Player(string name, char kh);
	Player(string name, char kh, int w, int l, int d);

	void setName(string name);
	void setKH(char kh);
	void setWin(int w);
	void setLose(int l);
	void setDraw(int d);

	string getName();
	char getKH();
	int getWin();
	int getLose();
	int getDraw();

	void incrementWin();
	void incrementLose();
	void incrementDraw();

	void turn(Board& board, int& i, int& j);
};

#endif // !PLAYER_H