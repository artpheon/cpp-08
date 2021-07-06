#include "span.hpp"
#include <iostream>

int main() {
    span sp(20);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    try {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (span::ExceptionNoSuchSpan& e) {
        std::cout << e.what() << std::endl;
    }
    try {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (span::ExceptionNoSuchSpan& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}