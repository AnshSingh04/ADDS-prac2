#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main() {
    Human human;
    Computer computer;
    Referee referee;

    char result = referee.refGame(human,computer);
    std::cout<<result<<"\n";
}