#include <iostream>
#include "Fibonacci.h"

int main() {
    try {
        size_t n;
        std::cout << "Enter the number of Fibonacci numbers to generate: ";
        std::cin >> n;

        Fibonacci<unsigned int> fib(n);
        std::vector<unsigned int> sequence = fib.getSequence();

        std::cout << "Fibonacci sequence: ";
        for (size_t i = 0; i < sequence.size(); ++i) {
            std::cout << sequence[i] << " ";
        }
        std::cout << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}