/*
 * The main file for our calculator application.
 */

#include <iostream>
#include "token.h"
#include <vector>

Token get_token();
// Creates a container for our Token type with name tok
vector<Token>tok;

int main()
{
    while(std::cin) {
        Token t = get_token();
        tok.push_back(t);
    }
    return 0;
}