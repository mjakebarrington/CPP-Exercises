/*
 * A simple example of classes for Chapter 6.
 */
#include <iostream>
using namespace std;
// User-defined classes are typically uppercase.
// ACCESS SPECIFIERS:
// Private members are only accessible from within the class.
// Protected members are accessible from both parent and any child classes.
// Public members are accessible from anywhere they are visible. 
class Rectangle
{
    // Member data
    /*
     * Width and height can be private members, because they are modified through
     * set_values, which is a public member function within the class.
     */
private:
    int width, height;
public:
    // Member functions
    void set_values(int,int);
    int area() {return width*height;}
};

void Rectangle::set_values(int x, int y) {
    width = x;
    height = y;
}

int main()
{
    Rectangle rect;
    rect.set_values(3,4);
    cout << "The area of the rectangle is: " << rect.area() << endl;
    return 0;
}