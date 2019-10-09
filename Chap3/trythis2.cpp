/*
 * In this "try this" exercise, students are asked to perform some operations on a double, and then again on an int.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Please enter an integer: ";
	int n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n+1
		<< "\n3 * n == " << n*3
		<< "\ntwice n == " << n+n
		<< "\nn squared == " << n*n
		<< "\nhalf n == " << n/2
		<< "\nsquare root of n == " << sqrt(n)
		<< endl;
	return 0;
}
