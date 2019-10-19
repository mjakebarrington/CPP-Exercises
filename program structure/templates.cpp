/*
 * In the previous demonstration (overloading.cpp) we saw that we can overload
 * a function to allow for multiple types to be passed to our function.
 * One of the principles of design, however, is to avoid repeating code when possible.
 * C++ allows for functions to have different types passed to them through the use of function templates:
 */

#include <iostream>

/*
 * Note: Though I used some_type as my template parameter name, and any legal name is okay,
 * it is quite common to see the name 'T' to refer to type.
 */
template <class some_type>
some_type div(some_type a, some_type b)
{
    return a/b;
}

// It is also possible to have multiple template parameters (separated by commas):
template <class T, class U>
// This will always return first type, but can accept type U as a parameter.
T sum(T a, U b)
{
    return a+b;
}

// Template arguments need not be types. Here we pass an integer as a template argument.
template <class T, int my_num>
T mult(T a)
{
    return a*my_num;
}

int main()
{
    // Template parameters are enclosed with angle brackets <>
    std::cout << "9/5 as ints: " << div<int>(9,5) << std::endl;
    // => 1
    std::cout << "9/5 as doubles: " << div<double>(9,5) << std::endl;
    // => 1.8
    
    // With templates, the compiler is able to deduce the type parameter:
    std::cout << "\n9/5 as automatically deduced by compiler: " << div(9.0,5.0) << std::endl;
    
    std::cout << "\nSum of 3.1 and 5: " << sum(3.1,5) << std::endl;
    // => 8.1
    std::cout << "Sum of 5 and 3.1: " << sum(5,3.1) << std::endl;
    // => 8 (because an integer is passed first and is therefore the return type)
    std::cout << "Sum of 5 and 3.1 as EXPLICIT DOUBLES: " << sum<double>(5,3.1) << std::endl;
    // By explicitly stating double as my first template param, this evaluates to 1.8. <double,double> would have been fine but is redundant in THIS case.
    
    std::cout << "\nMultiplying double 10.1 by int 4 as template arg: " << mult<double,4>(10.1) << std::endl;
    // => 40.4
}