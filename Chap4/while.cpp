/*
 * A simple while-loop from the textbook.
 */

#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	while(i<=100) {
		cout << i << "\t" << i*i << "\n"; // Note: the book uses square(i). I simply multiply.
		++i;
	}
	return 0;
}
