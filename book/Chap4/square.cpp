/*
 * In this exercise, students are asked to calculate the square of a number without using square() or multiplication.
 * Efficiency is not considered for the purposes of this exercise.
 */

#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	cin >> x;
	int counter = 0;
	for(int i=0; i < x; ++i)
	{
		counter += x;
	}
	cout << counter << "\n";
	return 0;
}
