// Small program I used to test efficiency of different data types
#include <chrono> 
#include <iostream> 
#include <vector>
using namespace std; 
using namespace std::chrono; 

int main() 
{
    // Start clock
    auto start = high_resolution_clock::now();
    // Function to be measured
    double sum = 2;
    for(int i=0;i<50000;++i)
    {
        if(sum=2)
        {
            sum-=2;
        } else
        {
            sum+=2;
        }
    }
    // End clock
    auto stop = high_resolution_clock::now();
    // Calculates total duration of function.
    auto duration = duration_cast<microseconds>(stop - start); 
  
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl; 
    cout << "The last number is: " << sum << endl;
    return 0; 
} 
