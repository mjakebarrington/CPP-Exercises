/*
 * We saw in the functions demonstration various functions that had a single
 * type as arguments, but it is common to want a function to take multiple types.
 * Luckily, in C++ we can have two functions with the same name, but different return
 * and argument types. This is known as an overloaded function.
 * The compiler determines which function to call based on the provided arguments.
 * 
 * In the next demonstration (templates.cpp) we will see a much cleaner way of passing
 * multiple types to our function without repeating code; an important design consideration.
 */

#include <iostream>

int addition(int a, int b)
{
    return a+b;
}

// But what if we also want the function to add doubles?
double addition(double a, double b)
{
    return a+b;
}

// It is also possible to have the overloaded function perform a different operation for a different type.
// This is generally considered bad practice. Be careful with this.

float addition(float a, float b)
{
    // This is still our overloaded addition func, but it will multiply instead of adding.
    return a*b;
}

int main()
{
    int a,b;
    double c,d;
    float e,f;
    std::cout << "int 3 and int 3 passed to addition: " << addition(a=3, b=3) << std::endl;
    // => 6
    std::cout << "double 3 and double 3 passed to addition: " << addition(c=3, d=3) << std::endl;
    // => 6
    std::cout << "float 3 and float 3 passed to addition: " << addition(e=3, f=3) << "... UH OH!" << std::endl;
    // => 9... UH OH!
    
    // What happens if we pass two different types into our overloaded function?
    std::cout << "Float and double: " << addition(e=3,c=3) << std::endl;
    // We get a compiler warning, but it evaluates to 6 as the compiler assumes we want the most precision
    // and converts the float to a double.
    
    // So what about int and float?
    // std::cout << "Float and int: " << addition(a=3,e=3) << std::endl;
    // GCC will not compile. Call of overloaded function with int and float is ambiguous.
}