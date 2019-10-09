/*
 * This is the third "try this" exercise in chapter 3.
 * Students are expected to write a simple "repeated word detection program".
 */

#include <iostream>

using namespace std;

int main()
{
	string previous = " ";
	string current;
	while (cin>>current) {
		if(previous == current)
			cout << "Repeated word = " << current << endl;
		previous = current;
	}
	return 0;
}
