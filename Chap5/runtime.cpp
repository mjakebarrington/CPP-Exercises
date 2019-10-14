/*
 * This is a simple demonstration of a runtime error in C++
 * Setting value of int b to 0 will cause a runtime error.
 */

#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	int a = 10, b = 0, c;
	try {
		if (b == 0) {
			throw runtime_error("Divide by 0 error!");
		}
		c = a/b;
		cout << c << endl;
	} catch(runtime_error &err) {
		cout << "Exception Occurred: " << err.what() << endl;
	}
	return 0;
}	
