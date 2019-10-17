#include <iostream>
#include <limits>

int main () {
  /*
   * SIGNED INTS
   */
  std::cout << "Minimum value for short int: " << std::numeric_limits<short int>::min() << '\n';
  std::cout << "Maximum value for short int: " << std::numeric_limits<short int>::max() << '\n';
  std::cout << "Minimum value for int: " << std::numeric_limits<int>::min() << '\n';
  std::cout << "Maximum value for int: " << std::numeric_limits<int>::max() << '\n';
  std::cout << "Minimum value for long int: " << std::numeric_limits<long int>::min() << '\n';
  std::cout << "Maximum value for long int: " << std::numeric_limits<long int>::max() << '\n';
  std::cout << "Minimum value for long long int: " << std::numeric_limits<long long int>::min() << '\n';
  std::cout << "Maximum value for long long int: " << std::numeric_limits<long long int>::max() << '\n';
  std::cout << "\n\n\n\n\n";
  return 0;
}