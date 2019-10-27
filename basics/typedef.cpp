/*
 * TYPEDEF
 * typedef is a specifier keyword that allows us to give types alternative
 * (potentially more descriptive) names.
 */

#include <iostream>

typedef unsigned long long LARGE_POS_INT;

// typedef can be used for user defined types:

enum RGB
{
    Red,
    Green,
    Blue
};

typedef RGB COLORS;

int main()
{
    LARGE_POS_INT myLargePositiveInteger = 23047289347344;
    std::cout << myLargePositiveInteger << std::endl;
    COLORS myColor = Red;
    std::cout << "My color int val is: " << myColor << std::endl;
    return 0;
}