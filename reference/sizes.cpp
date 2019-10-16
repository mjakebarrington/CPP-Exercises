// Data sizes in C++
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*
     * NUMBERS 
    */
    int a;
    short int b;
    long int c;
    long long int d;
    float e;
    double f;
    long double g;
    cout << "The size of int is: " << sizeof(a) << " bytes or " << sizeof(a)*8 << " bits" << endl;
    cout << "The size of short int is: " << sizeof(b) << " bytes or " << sizeof(b)*8 << " bits" << endl;
    cout <<"The size of long int is: " << sizeof(c) << " bytes or " << sizeof(c)*8 << " bits" << endl;
    cout << "The size of long long int is: " << sizeof(d) << " bytes or " << sizeof(d)*8 << " bits" << endl;
    cout << "The size of float is: " << sizeof(e) << " bytes or " << sizeof(e)*8 << " bits" << endl;
    cout << "The size of double is: " << sizeof(f) << " bytes or " << sizeof(f)*8 << " bits" << endl;
    cout << "The size of long double is: " << sizeof(g) << " bytes or " << sizeof(g)*8 << " bits\n\n\n" << endl;
    /*
     * Other Data Types
    */
    char h;
    wchar_t i;
    string j;
    vector<string>k;
    bool l;
    cout << "The size of char is: " << sizeof(h) << " bytes or " << sizeof(h)*8 << " bits" << endl;
    cout << "The size of wchar_t is: " << sizeof(i) << " bytes or " << sizeof(i)*8 << " bits" << endl;
    cout << "The size of string is: " << sizeof(j) << " bytes or " << sizeof(j)*8 << " bits" << endl;
    cout << "The size of vector is: " << sizeof(k) << " bytes or " << sizeof(k)*8 << " bits" << endl;
    cout << "The size of bool is: " << sizeof(l) << " bytes or " << sizeof(l)*8 << " bits" << endl;
    return 0;
}