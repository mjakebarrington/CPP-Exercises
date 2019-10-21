/*
 * NAME VISIBILITY
 */

#include <iostream>

double global_two = 2.0;

double add_two(double a)
{
    double local_two = 2.0;
    return a+local_two;
}

/*
 * Local variables can have the same name if they are in different scopes,
 * but this can create confusion and should be avoided if possible.
 */

int scope_one(int a,int b)
{
    int same_name = 1;
    return a+b+same_name;
}

int scope_two(int a,int b)
{
    int same_name = 1;
    return a-b-same_name;
}

/*
 * Inner blocks can modify outer blocks, but can also re-utilize names:
 */

void my_block()
{
    int x = 7;
    int y = 4;
    std::cout << "\nx and y at start of block: " << x << ", " << y << std::endl;
    // => 7, 4
    {
        int x = 5; // Defines new inner variable x
        y = 100; // Redefined
        std::cout << "x and y from inner block\n(x has been been redeclared for inner scope)\n(y from outer block has been modified): "
                << x << ", " << y << std::endl;
        // => 5, 100
    }
    std::cout << "x and y at end of block: " << x << ", " << y << std::endl;
    // => 7, 100
}

int main()
{
    /*
     * Global variable can be accessed anywhere in program.
     */
    std::cout << "4 + global two: " << 4+global_two << std::endl;
    // => 6
    /*
     * Local variable cannot be accessed outside of scope.
     */
    // std::cout << "4 + local two: " << 4+local_two << std::endl;
    // => error: ‘local_two’ was not declared in this scope
    std::cout << "4 + function call: " << add_two(4) << std::endl;
    // => 6 local variable is accessed during function call.
    
    /*
     * Global Variable can be modified from anywhere in the program:
     */
    ++global_two;
    std::cout << "global_two after increment: " << global_two << std::endl;
    --global_two;
    /*
     * Local Variables can only be modified within their scope!
     */
    
    // ERROR => ++local_two;
    
    my_block();
    // Notice how y stays modified as it was modified from inner block but x
    // reverts back to initial value since the new x was defined for the inner block.
}