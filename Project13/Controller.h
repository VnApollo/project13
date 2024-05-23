#pragma once

#include "Player.h"
#include "Board.h"
#include "View.h"
#include <iostream>
#include <string>

class Controller {
public:
    Controller();
    bool checkWin(Player p1, Board& board);
    void playGame(Player p1, Player p2, int w, int h, int count, Board board, View view);
    void run(View view, Board board, Player p1, Player p2);
    void saveResult(Player p1, Player p2);
private:
    View view;
    Player player1;
    Player player2;
    Board board;
};

