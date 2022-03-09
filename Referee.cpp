#include "Referee.h"
#include <iostream>

Referee::Referee() {}

char Referee::refGame(Human player1, Computer player2) {
    char human_move = player1.makeMove();
    char computer_move = player2.makeMove();
    if(human_move == 'P')
        return 'W';
    if(human_move == 'S')
        return 'L';
    if(human_move == 'R')
        return 'T';

    return 0;
}