/*
 * In this exercise, students are tasked with creating a very simple currency conversion calculator.
 * Users must be able to convert BETWEEN the two chosen currencies using if/else if/if logic.
 * Currency data collected on 10/10/2019 and may no longer be accurate.
 * I chose the US Dollar and the European Euro.
 */

#include <iostream>

using namespace std;

int main()
{
	const double dollar = 0.907690;
	int amount = 1;
	char currency = ' ';
	cout << "Please enter the amount, followed by the base currency (u for US Dollars and e for Euros):\n";
	cin >> amount >> currency;
	if (currency == 'u')
	{
		cout << "$"  << amount << " == " << amount * dollar << " euros\n";
	}
	else if (currency == 'e')
	{
		cout << amount << " euros == $" << amount/dollar << "\n";
	}
	else
	{
		cout << "I'm sorry, I don't recognize that currency\n";
	}
	return 0;
}
