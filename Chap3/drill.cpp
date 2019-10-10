/*
 * DRILL - Simple Form
 * Users are asked to create a dialogue between the machine and the human being.
 * Note I did not complete this exercise verbatim. I added more to it.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Please enter your first name: ";
	string first_name;
	cin >> first_name;
	cout << "\tDear " << first_name << ",\nHow are you doing today? I would like to ask you some questions if that's okay.\n"
		<< "First, how old are you (in years)?\n";
	float age; // I said years but age is float in case someone writes '26.25' years.
	cin >> age;

	if(age<=0)
	{
		cout << "It can't be! Please try again\n";
		cin >> age;
	}

	else
	{
		float age_months = age * 12;
		cout << "That's roughly " << age_months << " months old! Cool!\n";
	}

	cout << "What is your favorite subject?\n";
	string fav_subject;
	cin.ignore();
	getline(cin,fav_subject);

	if(fav_subject == "computer science")
	{
		cout << "Mine too! I am, after all, a computer!\nGoodbye\n";
	}

	else
	{
		cout << fav_subject << " is cool! Mine is computer science.\nGoodbye!\n";
	}

	return 0;
}

