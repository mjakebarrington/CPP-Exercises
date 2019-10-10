/*
 * In this exercise, students are tasked with creating a loop that
 * lists characters next to their integer values.
 */

#include <iostream>

using namespace std;

int main()
{
	char i = 'a';
	while(i<='z')
	{
		int integer_value = i;
		cout << i << "\t" << integer_value << "\n";
		++i;
	}
	return 0;
}
