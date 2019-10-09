/*
 * In this exercise students are asked to examine compiler errors in the following snippet of code.
 */

#include <iostream>

using namespace std;

int main()
{
	String s = "Goodbye, cruel world!\n";	// "String" is not defined because the type is "string" (lowercase)
	cOut << S << "\n";	// "cOut" was not declared because the function is "cout" all lowercase. S was not declared because our variable is s (lowercase)
	int if = 3;
	cout << if << "\n"; // if is a reserved keyword! There are about 70 reserved words in CPP.
	int string = 4; // technically valid but REALLY BAD PRACTICE. Especially when using stdlib.
	string UPPERCASE_STRING = "SOME UPPER CASE CHARACTERS"; // Also technically valid BUT all caps usually reserved for macros.
	int number_of_times_that_my_cat_walked_on_my_keyboard; // Way too long.
	int p; // Other engineers might not know what p is and you may forget. Make it meaningful.
	double piston_ratio; // Not too long, but still meaningful.
	return 0;
}
