/*
 * A simple example of classes for Chapter 6.
 */
#include <iostream>
using namespace std;
// User-defined classes are typically uppercase.
class Rectangle
{
    int width, height;
public:
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
    cout << "The area of rect is: " << rect.area() << endl;
    return 0;
}