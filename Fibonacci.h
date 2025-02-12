#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <vector>
#include <stdexcept>

template <typename T>
class Fibonacci {
public:
    explicit Fibonacci(size_t n);
    std::vector<T> getSequence() const;

private:
    size_t n_;
    std::vector<T> sequence_;
    void calculate();
};

template <typename T>
Fibonacci<T>::Fibonacci(size_t n) : n_(n) {
    if (n_ == 0) {
        throw std::invalid_argument("n must be greater than 0");
    }
    calculate();
}

template <typename T>
void Fibonacci<T>::calculate() {
    sequence_.push_back(0);
    if (n_ > 1) {
        sequence_.push_back(1);
    }
    for (size_t i = 2; i < n_; ++i) {
        T next = sequence_[i - 1] + sequence_[i - 2];
        sequence_.push_back(next);
    }
}

template <typename T>
std::vector<T> Fibonacci<T>::getSequence() const {
    return sequence_;
}

#endif // FIBONACCI_H