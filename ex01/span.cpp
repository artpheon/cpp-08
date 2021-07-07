#include "span.hpp"

int min(int a, int b) {
    return (a > b ? b : a);
}

int max(int a, int b) {
    return (a > b ? a : b);
}

span::span(unsigned int n) : _set(std::set<int>()), _size(n), _filled(0) {}

span::span(const span& rhs) {
    *this = rhs;
}

span& span::operator=(const span& rhs) {
    if (this != &rhs) {
        _set = rhs._set;
        _size = rhs._size;
        _filled = rhs._filled;
    }
    return *this;
}

span::~span() {}

span& span::addNumber(int nbr) {
    if (_filled == _size)
        throw std::overflow_error("The set is full!");
    _set.insert(nbr);
    ++_filled;
    return *this;
}

int span::shortestSpan() const {
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

int span::longestSpan() const {
    if (_size < 2)
        throw std::runtime_error("No such span in the set!");
    int first = *_set.begin();
    int last = *(--_set.end());
    return last - first;
}