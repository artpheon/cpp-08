#include "Span.hpp"

int min(int a, int b) {
    return (a > b ? b : a);
}

int max(int a, int b) {
    return (a > b ? a : b);
}

Span::Span(unsigned int n) : _set(std::set<int>()), _size(n), _filled(0) {}

Span::Span(const Span& rhs) {
    *this = rhs;
}

Span& Span::operator=(const Span& rhs) {
    if (this != &rhs) {
        _set = rhs._set;
        _size = rhs._size;
        _filled = rhs._filled;
    }
    return *this;
}

Span::~Span() {}

Span& Span::addNumber(int nbr) {
    if (_filled == _size)
        throw std::overflow_error("The set is full!");
    _set.insert(nbr);
    ++_filled;
    return *this;
}

int Span::shortestSpan() const {
    int min = 2147483647;
    std::set<int>::const_iterator it = _set.begin();
    std::set<int>::const_iterator itNext = ++_set.begin();
    for (; it != _set.end(); it++) {
        if (itNext != _set.end()) {
            min = (*itNext - *it < min ? *itNext - *it : min);
            ++itNext;
        }
    }
    return min;
}

int Span::longestSpan() const {
    if (_size < 2)
        throw std::runtime_error("No such Span in the set!");
    int first = *_set.begin();
    int last = *(--_set.end());
    return last - first;
}


void Span::print() const {
    std::set<int>::const_iterator it = _set.begin();
    std::cout << "set:" << std::endl;
    for(; it != _set.end(); it++) {
        std::cout << *it << std::endl;
    }
    std::cout << "end;" << std::endl;
}