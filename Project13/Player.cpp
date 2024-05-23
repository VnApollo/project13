#include "Player.h"

Player::Player() {

}

Player::Player(string name, char kh) {
	this->name = name;
	this->kh = kh;
}

Player::Player(string name, char kh, int w, int l, int d) {
	this->name = name;
	this->kh = kh;
	this->win = w;
	this->lose = l;
	this->draw = d;
}

void Player::setName(string name) {
	this->name = name;
}

void Player::setKH(char kh) {
	this->kh = kh;
}

void Player::setWin(int w) {
	this->win = w;
}

void Player::setLose(int l) {
	this->lose = l;
}

void Player::setDraw(int d) {
	this->draw = d;
}

string Player::getName() {
	return name;
}

char Player::getKH() {
	return kh;
}

int Player::getWin() {
	return win;
}

int Player::getLose() {
	return lose;
}

int Player::getDraw() {
	return draw;
}

void Player::incrementWin()
{
	win++;
}

void Player::incrementLose()
{
	lose++;
}

void Player::incrementDraw()
{
	draw++;
}

void Player::turn(Board& board, int& i, int& j)
{
	cout << "Player " << name << " turn: ";
	cin >> i >> j;
	if (i<1 || i>(board.get_w()) || j<1 || j>(board.get_h()) || board.get_arr(i - 1, j - 1) != ' ') {
		cout << "Invalid\n";
		Player::turn(board, i, j);// g?i ?? quy ?? th? l?i l??t
	}
	else {
		board.set_arr(i - 1, j - 1, kh);
	}
}
