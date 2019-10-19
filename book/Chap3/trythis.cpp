/*
 * In chapter 3's "Try This" exercise, students are asked to print someones name out in months.
 */

#include <iostream>
using namespace std;

int main() {
	cout << "What is your name and age in years? \n";
	string name;
	double age;
	cin >> name >> age;
	age *= 12;
	cout << "Hello, " << name << ", you are roughly " << age << " months old!\n";
	return 0;
}
