/*
 * This is the third "try this" exercise in chapter 3.
 * Students are expected to write a simple "repeated word detection program".
 */

#include <iostream>

using namespace std;

int main()
{
	int word_count = 0;
	string previous = " ";
	string current;
	while (cin>>current) {
		++word_count;
		if(previous == current)
			cout << "\nRepeated word: " << current << " found at position " << word_count << endl;
		previous = current;
	}
	return 0;
}
