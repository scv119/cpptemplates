#include "stack1.hpp"
#include <deque>
#include <stdexcept>
#include <string>

// Specialization.
template <> class Stack<std::string> {
public:
  // Stack(Stack<T> const &) = default;
  // Stack<T> &operator=(Stack<T> const &) = default;
  void push(std::string const &);
  void pop();
  std::string top() const;
  bool empty() const { return elems_.empty(); }

private:
  std::deque<std::string> elems_;
};

void Stack<std::string>::push(std::string const &elem) {
  elems_.push_back(elem); // append copy of passed elem
}

void Stack<std::string>::pop() {
  if (elems_.empty()) {
    throw std::out_of_range("empty stack");
  }
  elems_.pop_back();
}

std::string Stack<std::string>::top() const {
  if (elems_.empty()) {
    throw std::out_of_range("empty stack");
  }
  return elems_.back();
}