#include <gtest/gtest.h>
#include "../Fibonacci.h"

TEST(FibonacciTest, BasicSequence) {
    Fibonacci<unsigned int> fib(5);
    std::vector<unsigned int> expected = {0, 1, 1, 2, 3};
    EXPECT_EQ(fib.getSequence(), expected);
}

TEST(FibonacciTest, ZeroInput) {
    EXPECT_THROW(Fibonacci<unsigned int> fib(0), std::invalid_argument);
}

TEST(FibonacciTest, SingleNumber) {
    Fibonacci<unsigned int> fib(1);
    std::vector<unsigned int> expected = {0};
    EXPECT_EQ(fib.getSequence(), expected);
}