#include <iostream>

template <typename T> inline T const &max(T const &a, T const &b) {
  std::cout << "template function called" << std::endl;
  return a < b ? b : a;
}

template <typename T> inline const T &max(const T &a, const T &b, const T &c) {
  return max(max(a, b), c);
}

inline const int &max(int const &a, const int &b) {
  std::cout << "non-template overload called" << std::endl;
  return a < b ? b : a;
}

int main() {
  max(1, 2, 3);
  return 0;
}