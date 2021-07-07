#include "Span.hpp"
#include <iostream>
#include <ctime>
#include <vector>

void    test_with_small_numbers() {
    Span sp(10);
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
    Span sp(10000);
    for (int i = 0; i < 10005; i++) {
        try {
            sp.addNumber(rand() % 1000000);
        }
        catch (std::exception &e) { std::cout << e.what() << std::endl; }
    }
    //sp.print();
    std::cout<< "Getting shortest Span..." << std::endl;
    try {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout<< "Getting longest Span..." << std::endl;
    try {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

void    test_with_100000() {
    Span sp(100000);
    for (int i = 0; i < 100010; i++) {
        try {
            sp.addNumber(rand() % 100000000);
        }
        catch (std::exception &e) { std::cout << e.what() << std::endl; }
    }
    //sp.print();
    std::cout<< "Getting shortest Span..." << std::endl;
    try {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout<< "Getting longest Span..." << std::endl;
    try {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

void    test_better_add() {
    std::cout << "TEST____betterAddNumber" << std::endl;
    Span sp(10);
    std::vector<int> v;
    v.push_back(13);
    v.push_back(25);
    v.push_back(0);
    v.push_back(66);
    v.push_back(99);
    v.push_back(33);
    std::cout << "Created a vector:" << std::endl;
    for (std::vector<int>::iterator it = v.begin(); it < v.end(); it++) {
        std::cout << *it << std::endl;
    }
    sp.betterAddNumber(v.begin(), v.end());
    sp.print();

}

int main() {
    srand(time(0));
    test_with_small_numbers();
    return 0;
}