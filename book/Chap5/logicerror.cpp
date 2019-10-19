/*
 * This is a simple logic error example provided by the book.
 * The program will compile and run, but will not yield the correct results.
 */

#include <iostream>
#include <vector>

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
		// high_temp is initialized at 0, so our logic assumes there will be a temp over 0.
		// Don't ship this to a researcher at one of the poles!
		if(temps[i] > high_temp)high_temp=temps[i];
		// low_temp is initialized at 0, so our logic assumes we will have a negative temperature.
		// imagine trying to use this logic to collect temperature data in the Sahara!
		if(temps[i] < low_temp)low_temp=temps[i];
		sum += temps[i];
	}
	
	cout<<"High Temperature: "<<high_temp<<endl;
	cout<<"Low Temperature: "<<low_temp<<endl;
	cout<<"Average Temperature: "<<sum/temps.size()<<endl;

	return 0;
}
