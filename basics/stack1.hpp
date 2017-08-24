#include <stdexcept>
#include <vector>

template <typename T> class Stack {
public:
  // Stack(Stack<T> const &) = default;
  // Stack<T> &operator=(Stack<T> const &) = default;
  void push(T const &);
  void pop();
  T top() const;
  bool empty() const { return elems_.empty(); }

private:
  std::vector<T> elems_;
};

template <typename T> void Stack<T>::push(T const &elem) {
  elems_.push_back(elem); // append copy of passed elem
}

template <typename T> void Stack<T>::pop() {
  if (elems_.empty()) {
    throw std::out_of_range("empty stack");
  }
  elems_.pop_back();
}

template <typename T> T Stack<T>::top() const {
  if (elems_.empty()) {
    throw std::out_of_range("empty stack");
  }
  return elems_.back();
}