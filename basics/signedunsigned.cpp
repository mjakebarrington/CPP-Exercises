/*
 * The Difference Between Signed and Unsigned Numbers
 */
 
 int main()
 {
   /*
    * By default, numbers all numbers in C++ are signed. In addition to the value,
    * a sign (either + or -) is stored with the value in memory. So for example,
    * int myInt = 34564 technically stores the value 34564 along with the + sign in memory.
    * In C++ we can store unsigned numbers too, allowing us to store larger values.
    */
    
    int maximum_integer = 2147483647;
    unsigned int maximum_unsigned_integer = 4294967295;
    // Note that unsigned numbers can be dangerous and should almost never be used beyond academic purposes.
 }
