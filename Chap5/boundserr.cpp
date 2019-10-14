
#include <iostream>
#include <vector>
// Needed for out_of_range
#include <stdexcept>

using namespace std;

int main()
{
		vector<int>v;
		v.push_back(3);
		v.push_back(4);
		try {
		for(int i=0; i<=v.size();i++) {
			if(i >= v.size()){
				throw out_of_range("Out of range error");
			}
			else{
			cout<<"v["<<i<<"] == "<<v[i]<<"\n";
			}
		}
	// In the header provided for the book this is out_of_range_error
	} catch (out_of_range) {
		cerr << "OOps, range error!\n";
		return 1;
	} catch (...) {
		cerr << "Something went wrong.\n";
		return 2;
	}
	return 0;
}
