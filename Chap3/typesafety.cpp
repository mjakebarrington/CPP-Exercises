/*
 * Note: Not an official exercise per se, but a useful exercise on type safety using
 * concepts provided in Chapter 3 of the book.
 */

#include <iostream>

using namespace std;

int main()
{
	double x;	// BAD. Using a variable before it is initialized is bad type safety.
	double y = x;
	double z = 2.0 + x;
	// ----------------
	char c = 'x';
	int i1 = c; // i1 gets the value of 120 which the integer value for the character x in 8-bit ASCII char set
	char c2 = i1; // because type of c2 is char, the 120 int becomes character x again. Same representation in memory but read differently
	cout << c << " " << i1 << " " << c2 << endl;
	// => Prints 'x 120 x'


	double d1 = 2.3;
	if(d1 < 0)	// 0 is converted to 0.0 before comparison.
		cout << "Number is negative" << endl;
	double d2 = d1 + 2; // 2 is converted to 2.0
	return 0;
}
