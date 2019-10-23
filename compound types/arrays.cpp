/*
 * ARRAYS
 */

 // Arrays are defined under header <array>
 #include <iostream>
 #include <array>

 /*
  * An array is a series (container) of elements of the same type stored in a contiguous area of memory.
  * Unlike vectors, arrays are of fixed size.
  */

// A global array foo with 5 integers:
int foo [5];

// The index ('location') of each element ('member') can be accessed using array[index]
// Arrays always start at index 0:
// so foo has foo[0] up to foo[4] for a total of five elements

/*
 * ARRAYS AS PARAMETERS:
 * It is not possible to directly pass an array as a parameter, but it can be passed as an address:
 */

template <class A>
void print_arr(A arg[], int length)
{
    for(int i=0;i<length;++i)
    {
        std::cout << arg[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
  // The elements of an array can be explicitly initialized when the array is declared by using curly braces:
  double bar[5] = {3.0,2.392,1293.222,8.3,49.623};
  /*
   * bar[0] == 3.0
   * bar[1] == 2.392
   * bar[2] == 1293.222
   * bar[3] == 8.3
   * bar[4] == 49.623
   */

   // Square brackets can be empty and the compiler will auto-determine the size of the container:
   int baz[] = {1,2,3};
   /*
    * bar[0] == 1
    * bar[1] == 2
    * bar[2] == 3
    */

    // Undeclared elemnts will be assigned default value (zero for fundamental types):
    // Note: Equal sign not required as C++ supports universal initialization
    int bam[4] {3,7,2};
    /*
     * bar[0] == 3
     * bar[1] == 7
     * bar[2] == 2
     * bar[3] == 0 <= auto assigned to zero
     */

     /*
      * Multidimensional Arrays
      * You can create arrays of arrays.
      * BE WARNED: The amount of memory increases exponentially with each dimension.
      */
      int nums[4][5];
      /* Can be represented as a table:
       * 00 01 02 03 04
       * 10 11 12 13 14
       * 20 21 22 23 24
       * 30 31 32 33 34
       */
      
    /*
     * ARRAYS AS PARAMETERS:
     */
    std::cout << bam.size();
    print_arr(bam,4);
}
