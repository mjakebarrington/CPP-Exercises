/*
 * Just a simple example of finding the average of elements of a vector in c++
 * Not covered in book, just an exercise I did for fun.
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Starting with empty vector of doubles called "find_average"
	vector<double>find_average;
	// Use push_back member function of vector to push numbers onto the vector.
	find_average.push_back(3.4);
	find_average.push_back(10.8);
	find_average.push_back(1.23);
	find_average.push_back(11.4);
	find_average.push_back(7.8);
	find_average.push_back(2.2);
	// Ininitialize sum as zero.
	double sum = 0;
	for(int i=0; i<find_average.size(); ++i)
	{	
		// Add value of element to sum.
		sum += find_average[i];
	}
	// Take the final sum and divide it by the size of the vector.
	double average = sum/find_average.size();
	// Print result to terminal.
	cout << "The average value in the vector is: " << average << "\n";
	return 0;
}
