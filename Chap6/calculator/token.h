/*
 * Header file for our user defined "Token" type.
 */

class Token{
public:
    // Character for our kind of token, double for respective value.
    char kind;
    double value;
    // Constructor member function for when input is only char (*+-/ etc)
    // Constructors do not have a return value (in fact that's illegal)
    Token(char ch) {
        kind = ch;
        value = 0;
    }
    // Constructor member function for when input is both a char and value such as a number.
    Token(char ch, double val) {
        kind = ch;
        value = val;
    }
};