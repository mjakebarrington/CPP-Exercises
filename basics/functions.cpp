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
#include <string>

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

/*
 * EFFICIENCY CONSIDERATIONS
 * Arguments as values causes copies of the values to be made.
 * This generally isn't an issue for a small function that only gets called a few times.
 * For a high-throughput function that deals with large compound-data types,
 * this can be a serious consideration.
 * References can be useful in this situation, but we want to ensure that
 * our initial values don't get modified, so we will qualify the params as const: 
 */

std::string high_throughput_strs_cnct(const std::string& a, const std::string& b, const std::string& c, const std::string& d)
{
    return a+b+c+d;
}

/*
 * INLINE FUNCTIONS & DEFAULT PARAMETERS
 * Sometimes it may be more efficient for short functions to be expanded inline as opposed to
 * traditional function call method. Most compilers will automatically optimize code when this
 * is necessary; however, it may be necessary to do this explicitly:
 * 
 * Also: Notice how param int b is assigned 2. This is a default value. If we are only passed param a
 * b will automatically be assigned the value of 2.
 */

inline int add_ints(int a, int b=2)
{
    return a+b;
}

// See ln 134. This is called a function prototype. Return type and params must be declared here as well.
void do_nothing();





// Remember: Execution always starts with main function. Every function will only be
// executed if it is called from main, directly or indirectly.

int main()
{
    int a = 4;
    int b = square_int(a);
    std::cout << "The result of a squared is: " << b << std::endl;
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
    
    // Reference Efficiency:
    std::string my_str_one = "Large String 1, ";
    std::string my_str_two = "Large String 2, ";
    std::string my_str_three = "Large String 3, ";
    std::string my_str_four = "Large String 4";
    std::string resulting_str = high_throughput_strs_cnct(my_str_one,my_str_two,my_str_three,my_str_four);
    std::cout << "Big string is:\n" << resulting_str << std::endl;
    std::cout << "Just to make sure... our first string is still:\n" << my_str_one << std::endl;
    do_nothing();
    /* You may wonder why we specify int as the return type for main,
     * but sometimes we don't actually return a value. This is because
     * the compiler implicitly assumes the main function ends with return 0; (program executed successfully).
     * other times you will see main explicitly return 0.
     */
}


// Just like variables, functions cannot be called before they are declared,
// however, you can declare them before calling, but define them (function body) after.
// See ln 85

void do_nothing()
{
    // Code here
}