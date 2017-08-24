#include <stdexcept>
#include <vector>

// With default template arguments.
template <typename T, typename CONT = std::vector<T> > class Stack {
public:
  void push(T const &);
  void pop();
  T top() const;
  bool empty() const { return elems_.empty(); }

private:
  CONT elems_;
};

template <typename T, typename CONT> void Stack<T, CONT>::push(T const &elem) {
  elems_.push_back(elem); // append copy of passed elem
}

template <typename T, typename CONT> void Stack<T, CONT>::pop() {
  if (elems_.empty()) {
    throw std::out_of_range("empty stack");
  }
  elems_.pop_back();
}

template <typename T, typename CONT> T Stack<T, CONT>::top() const {
  if (elems_.empty()) {
    throw std::out_of_range("empty stack");
  }
  return elems_.back();
}