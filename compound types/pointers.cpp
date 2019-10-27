/*
 * A pointer is a number that refers to
 * a memory address.
 */
#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
    int var = 8;
    // The mem address of a variable can be obtained using the address of operator (&):
    var_address = &var;
    LOG(var);
    LOG(var_address);
    // A useless pointer.
    void* ptr = nullptr;
    // Pointer refers to memory address of var.
    int* my_pointer = &var;
    LOG(my_pointer);
    // => 0x7fffe25b91a4 (memory addr of var)
    // Will be different each execution.
    
    // Dereference pointer changes value to int 10.
    *my_pointer = 10;
    LOG(var);
}