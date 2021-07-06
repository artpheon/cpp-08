#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main() {
    std::vector<int> v;
 
    v.push_back(7);
    v.push_back(15);
    v.push_back(25);
    v.push_back(13);
    v.push_back(44);
    v.push_back(100);
    v.push_back(0);
    std::cout << "Created an array with ints: " << std::endl;
    std::vector<int>::iterator it = v.begin();
    std::vector<int>::iterator ite = v.end();
    for (;it != ite; it++) {
        std::cout << *it << std::endl;
    }

    int search = 100;
    try {
        std::cout << "Searching for an element " << search << ":" << std::endl;
        std::vector<int>::iterator toFind = easyfind(v, search);
        std::cout << "We have element: " << *toFind << " at position: " << toFind - v.begin() << std::endl;
    }
    catch (std::exception &e) { std::cout << e.what() << std::endl; }
    search = 99;
    try {
        std::cout << "Searching for an element " << search << ":" << std::endl;
        std::vector<int>::iterator toFind = easyfind(v, search);
        std::cout << "We have element: " << *toFind << std::endl;
    }
    catch (std::exception &e) { std::cout << e.what() << std::endl; }
}