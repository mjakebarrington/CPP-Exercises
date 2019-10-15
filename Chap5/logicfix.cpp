/*
 * This is a possible solution to fix the logic error.
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<double>temps;
	double temp = 0;
	double sum = 0;
	double high_temp = 0;
	double low_temp = 0;

	while (cin>>temp)
	{
		temps.push_back(temp);
	}
	for (int i=0; i<temps.size(); ++i)
	{
		// Just adds to sum.
		sum += temps[i];
	}
	// Sort sorts all the values in the vector
	sort(temps.begin(), temps.end());
	// Takes the highest temp.
	high_temp = temps[temps.size()-1];
	// Takes the lowest temp.
	low_temp = temps[0];
	
	cout<<"High Temperature: "<<high_temp<<endl;
	cout<<"Low Temperature: "<<low_temp<<endl;
	cout<<"Average Temperature: "<<sum/temps.size()<<endl;

	return 0;
}
