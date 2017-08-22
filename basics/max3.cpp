#include <cstring>
#include <iostream>
#include <string>

template <typename T> inline const T &max(const T &a, const T &b) {
  return a < b ? b : a;
}

template <typename T> inline const T *&max(const T *&a, const T *&b) {
  return *a < *b ? b : a;
}

int main() {
  int a = 7;
  int b = 42;
  std::cout << ::max(a, b) << std::endl;

  // If we comment out override for pointers, vavlues one will be called.
  std::cout << ::max(&a, &b) << std::endl;
}