/*
 * This is the drill for chapter 2.
 * It consists of a series of 11 different sub-exercises.
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// Part one
	vector<double>numbers;
	double user_num;
	// Prompt usr for 2 ints. Pipe | and ctrl-d/z terminate input.
	cout << "Please enter 2 numbers\n";
	// Count ensures that only the first two integers are pushed to vector.
	int cnt = 0;
	while(cnt < 2)
	{
		cin >> user_num;
		// Add input numbers to vector numbers.
		numbers.push_back(user_num);
		++cnt;
	}
	sort(numbers.begin(),numbers.end());
	for(int i=0; i<numbers.size(); ++i)
	{
		// Prints numbers to terminal.
		if(i==0 && numbers[i] == numbers[i+1])
		{
			cout << "THE NUMBERS ARE THE SAME\n";
			break;
		}
		else if(i==0)
		{
			cout << "The smaller number is: " << numbers[i] << "\n";
		}
		else if(i==1)
		{
			cout << "The larger number is: " << numbers[i] << "\n";
		}
	}
	return 0;
}
