/*
 * A simple demonstration of how a callee (function) should do error handling if possible.
 * Having the callee check can make identifying and fixing errors easier.
 * If the caller checks, you will need to fix the error for each time the function is called.
 */

#include <iostream>

using namespace std;

int main()
{
	/*
	 * Lambda function ensures both length and width are over 0, otherwise it will return an error
	 * message and return a value of -1. Obviously there cannot be an area of -1.
	 * Naturally I am dealing with some limitations of the lambda, but this is a useful demonstration.
	 */
	auto area = [] (int length, int width)
	{
		if(length > 0 && width > 0)
		{
			return length*width;
		}
		cout << "INVALID LENGTH OR WIDTH\n";
		return -1;
	};

	cout << "Please enter a length, followed by a width: ";
	int length;
	int width;
	cin >> length >> width;
	cout << area(length,width) << "\n";
	return 0;
}
