/*
 * In this exercise, students are tasked with creating a very simple currency conversion calculator.
 * Users must be able to convert BETWEEN the two chosen currencies using if/else if/if logic.
 * Currency data collected on 10/10/2019 and may no longer be accurate.
 * I chose the US Dollar and the European Euro.
 * The next try this in this chapter is to rewrite using switch and add more conversions. I have commented out part 1 and added part 2.
 */

#include <iostream>

using namespace std;

int main()
{
	const double euro = 0.907690;
	const double yuan = 7.11658;
	const double krone = 9.84492;
	int amount = 1;
	char currency = ' ';
	cout << "Please enter the amount, followed by the base currency (u for USD and e for EUR, s for SEK, c for CNY):\n";
	cin >> amount >> currency;
	/*
	if (currency == 'u')
	{
		cout << "$"  << amount << " == " << amount * euro << " euros\n";
	}
	else if (currency == 'e')
	{
		cout << amount << " euros == $" << amount / euro << "\n";
	}
	else
	{
		cout << "I'm sorry, I don't recognize that currency\n";
	}
	*/

	switch(currency)
	{
		case 'u':
			cout << "$" << amount << " == " << amount * euro << "EUR\n";
			cout << "$" << amount << " == " << amount * yuan << "CNY\n";
			cout << "$" << amount << " == " << amount * krone << "SEK\n";
			break;
		case 'e':
			cout << amount << "EUR == " << amount / euro << "USD\n";
			cout << amount << "EUR == " << (amount /  euro) * yuan << "CNY\n";
			cout << amount << "EUR == " << (amount / euro) * krone << "SEK\n";
			break;
		case 's':
			cout << amount << "SEK == " << amount / krone << "USD\n";
			cout << amount << "SEK == " << (amount / krone) * yuan << "CNY\n";
			cout << amount << "SEK == " << (amount / krone) * euro << "EUR\n";
			break;
		case 'c':
			cout << amount << "CNY == " << amount / yuan << "USD\n";
			cout << amount << "CNY == " << (amount / yuan) * krone << "SEK\n";
			cout << amount << "CNY == " << (amount / yuan) * euro << "EUR\n";
		default:
			cout << "I'm sorry, I'm not familiar with that currency!\n";
			break;
	}

	return 0;
}
