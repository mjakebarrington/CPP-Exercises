/*
 * FUNCTIONS
 * Functions are essential to any program.
 * They allow us to segment code into individual sections that
 * perform a specific task.
 * Functions follow this basic structure:
 * 
 * type name (parameters) {statements;}
 * 
 * type specifies what data type the function will return, or void if it does not return a value
 * name specifies a legal name that we assign to the function.
 * parameters are enclosed with parentheses () and separated by commas and can contain any number of params, including 0
 * our function body is enclosed with brackets {} and performs the actions of the function
*/
#include <iostream>

// Basic function which squares an integer.
int square_int(int x)
{
    int res = x*x;
    return res;
}

// void because the function does not actually return a value, it simply prints the square of the int parameter.
void print_int_square(int x)
{
    int res = x*x;
    std::cout << res << std::endl;
    // Notice how there is no return value. Function simply prints, not returns.
}

// Return type is always REQUIRED even if there is nothing to return (void)
// Putting void as the parameter to explicitly state there are no params is optional in C++ but required in other languages like C.
void print_hello(void)
{
    std::cout << "Hello!\n";
}

/*
 * Passing Arguments as References
 * So far we've seen arguments passed as values, and the values of those variables
 * are copied into the functions parameters. Occasionally we will want to reference the
 * actual variables. We can do this through references:
 */

void subtract_one(int& a, int& b)
{
    // a and b reference the actual variables passed in, as we will see in the main function.
    // This function subtracts 1 from each of the two variables. Think of a and b as aliases that represent actual variables.
    a-=1;
    b-=1;
}

// Remember: Execution always starts with main function. Every function will only be
// executed if it is called from main, directly or indirectly.

int main()
{
    int a = 4;
    int b = square_int(a);
    std::cout << "The result of a squared is: " << b << std::endlsubtacts;
    // Calls print_int_square function. Does not return a value, but prints value to terminal.
    print_int_square(5);
    // Even if there are no params, empty parentheses are required when calling a function.
    print_hello();
    // Passing a return type as a parameter is ILLEGAL.
    // ILLEGAL: print_hello(void);
    
    // REFERENCES:
    int x{3},y{6};
    subtract_one(x,y);
    std::cout << "x = " << x << ", y = " << y << std::endl;
    // Outputs x = 2, y = 5 because our subtract_one function references the actual variables.
    
    
    /* You may wonder why we specify int as the return type for main,
     * but sometimes we don't actually return a value. This is because
     * the compiler implicitly assumes the main function ends with return 0; (program executed successfully).
     * other times you will see main explicitly return 0.
     */
}