#include "Whatever.hpp"
#include <cstdlib>
#include <iostream>

int main() {
    int x = 10, y = 20;
    double a = 3.5, b = 2.1;
    char c1 = 'A', c2 = 'Z';

    // Tests max
    std::cout << "Max int: " << max(x, y) << std::endl;
    std::cout << "Max double: " << max(a, b) << std::endl;
    std::cout << "Max char: " << max(c1, c2) << std::endl;

    // Tests min
    std::cout << "Min int: " << min(x, y) << std::endl;
    std::cout << "Min double: " << min(a, b) << std::endl;
    std::cout << "Min char: " << min(c1, c2) << std::endl;

    // Tests swap
    std::cout << "\nAvant swap: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "Après swap: x = " << x << ", y = " << y << std::endl;

    std::cout << "\nAvant swap: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "Après swap: a = " << a << ", b = " << b << std::endl;

    std::cout << "\nAvant swap: c1 = " << c1 << ", c2 = " << c2 << std::endl;
    swap(c1, c2);
    std::cout << "Après swap: c1 = " << c1 << ", c2 = " << c2 << std::endl;

    return 0;
}
