/*
 * ENUMERATIONS
 * Enumerations are initialized using the keyword enum. They allow us to create
 * a sort of user defined type. This lets us create variables whose values
 * can only be set to the possibilities we have enumerated.
 */
#include <iostream>

enum RGB
{
    // As always, enumerators are case-sensitive. By default enumerators start with memory value of int 0.
    // We can change the starting integer, however:
    Red = 10,
    Green, // => 11
    Blue // => 12
};

int main()
{
    RGB myFavorite = Blue;
    std::cout << "My favorite color is: " << myFavorite << std::endl;
    // => 12
    // RGB secondFavorite = green; => Won't compile. Green is uppercase in enum. green not declared in this scope.
    return 0;
}