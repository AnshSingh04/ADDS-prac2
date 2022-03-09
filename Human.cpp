#include "Human.h"
#include <iostream>

Human::Human() {}

char Human::makeMove() {
    char c;
    std::cout<<"Enter move: ";
    std::cin>>c;
    return c;
}