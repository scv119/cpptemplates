#include "max.hpp"
#include <iostream>
#include <string>

int main() {
  int i = 42;
  std::cout << "max(7, i):  " << ::max(7, i) << std::endl;

  std::string s1{"mathematics"};
  std::string s2{"math"};
  std::cout << "max(s1, s2): " << ::max(s1, s2) << std::endl;

  // This doesn't work ::max(4, 4.42) because failed type deduction.`
  std::cout << "Specify explicit type of T: max<doube>(4, 4.42): "
            << ::max<double>(4, 4.42) << std::endl;

  // Only specify explicit type of RT
  std::cout << ::max1<double>(4, 4.42) << std::endl;
  return 0;
}