#include "span.hpp"

int min(int a, int b) {
    return (a > b ? b : a);
}

int max(int a, int b) {
    return (a > b ? a : b);
}

span::span(unsigned int n) {
    if (n)
    {
        _array = new int[n];
        for (int i = 0; i < n; i++) {
            _array[i] = 0;
        }
    }
    else
        _array = 0;
    _size = n;
    _filled = 0;
}

span::span(const span& rhs) {
    *this = rhs;
}

span& span::operator=(const span& rhs) {
    if (rhs._size && this != &rhs) {
        _array = new int[rhs._size];
        for (int i = 0; i < rhs._size; i++) {
            _array[i] = rhs._array[i];
        }
        _size = rhs._size;
        _filled = rhs._filled;
    }
    return *this;
}

span::~span() {
    if (_size)
        delete [] _array;
}

span& span::addNumber(int nbr) {
    if (_filled == _size)
        throw ExceptionSpanIsFull();
    _array[_filled] = nbr;
    ++_filled;
    return *this;
}

int span::shortestSpan() const {
    return 0;// shortest span
}

int span::longestSpan() const {
    if (_size < 2)
        throw ExceptionNoSuchSpan();
    int min = _array[0], max = _array[0];
    for (int i = 0; i < _filled; i++) {
        min = ::min(min, _array[i]);
        max = ::max(max, _array[i]);
    }
    if (max == min)
        throw ExceptionNoSuchSpan();
    return (max - min);
}