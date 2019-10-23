/*
 * The Difference Between Signed and Unsigned Numbers
 */
 
 int main()
 {
   /*
    * By default, all numbers in C++ are signed. In addition to the value,
    * a sign (either + or -) is stored with the value in memory. So for example,
    * int myInt = 34564 stores the value 34564 along with the + sign in memory.
    * In C++ we can store unsigned numbers too, allowing us to store larger values.
    */
    
    // Maximum numbers may vary by platform and compiler.
    int maximum_integer = 2147483647;
    unsigned int maximum_unsigned_integer = 4294967295;
    /* Note that unsigned numbers can be dangerous (difficult to debug in a large code base) and should be used
    only when absolutely certain numbers will always be positive. */
  
    // Characters can also be unsigned. Chars are ASCII representations of integers:
    unsigned char my_unsigned_char = 'd';
 }
