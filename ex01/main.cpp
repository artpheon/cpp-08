#include "span.hpp"
#include <iostream>
#include <ctime>

void    test_with_small_numbers() {
    span sp(10);
    for (int i = 0; i < 15; i++) {
        try {
            sp.addNumber(rand() % 100);
        }
        catch (std::exception &e) { std::cout << e.what() << std::endl; }
    }
    sp.print();
    std::cout<< "Getting shortest span..." << std::endl;
    try {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout<< "Getting longest span..." << std::endl;
    try {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

void    test_with_10000() {
    span sp(10000);
    for (int i = 0; i < 10005; i++) {
        try {
            sp.addNumber(rand() % 1000000);
        }
        catch (std::exception &e) { std::cout << e.what() << std::endl; }
    }
    //sp.print();
    std::cout<< "Getting shortest span..." << std::endl;
    try {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout<< "Getting longest span..." << std::endl;
    try {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

void    test_with_100000() {
    span sp(100000);
    for (int i = 0; i < 100010; i++) {
        try {
            sp.addNumber(rand() % 100000000);
        }
        catch (std::exception &e) { std::cout << e.what() << std::endl; }
    }
    //sp.print();
    std::cout<< "Getting shortest span..." << std::endl;
    try {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout<< "Getting longest span..." << std::endl;
    try {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

int main() {
    srand(time(0));
    test_with_small_numbers();
    test_with_10000();
    test_with_100000();
    return 0;
}