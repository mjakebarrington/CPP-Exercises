/*
 * Also not from the book. Just a simple exercise calculating the area of a circle.
 */

#include <iostream>

using namespace std;

int main()
{
	float area, radius, pi;
	cout << "Please enter a radius: ";
	cin >> radius;
	pi = 3.1415927; // float can hold up to seven decimal places. Last decimal rounded up for precision.
	area = pi * (radius * radius);
	cout << "The area of the circle is: " << area << endl;
	return 0;
}
