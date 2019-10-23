/*
 * CHARACTER SEQUENCES:
 * So far we have seen the char type with only one element (one char)
 * We can also create sequences of characters. These are simply arrays of characters.:
 */

#include <iostream>
#include <string>

namespace char_seq
{
    // By convention character sequences are terminated with null character '\0'
    char c_string[] = {'T', 'h', 'i', 's', ' ', 'i', 's', ' ', 'S', 'p', 'a', 'r', 't', 'a', '!', '\0'};
    // Character sequences do not need to be initialized.
    char some_chars[10];
    
    // BUT WAIT! Theres more. Character sequences can be initialized using string literals. The follow two variables are equal.
    char hello_one[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    char hello_two[] = "Hello";
    /*
     * The above are known as C-strings. C++ stdlib also has a class known as strings,
     * which are virtually synonymous:
     */
    std::string my_string = "Hello";
}

int main()
{
    std::cout << char_seq::hello_one << " == " << char_seq::hello_two <<
            " == " << char_seq::my_string << std::endl;
}