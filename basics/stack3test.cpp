#include "stack3.hpp"
#include <cstdlib>
#include <deque>
#include <iostream>
#include <string>

int main() {
  try {
    Stack<int> intStack;
    Stack<double, std::deque<double> > doubleStack;

    intStack.push(7);
    std::cout << intStack.top() << std::endl;

    doubleStack.push(42.42);
    std::cout << doubleStack.top() << std::endl;
    doubleStack.pop();
    doubleStack.pop();
  } catch (std::exception const &ex) {
    std::cerr << "Exception: " << ex.what() << std::endl;
    return 1;
  }
  return 0;
}