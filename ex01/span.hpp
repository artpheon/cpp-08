#ifndef SPAN_HPP
# define SPAN_HPP
# include <stdexcept>
# include <iterator>
# include <set>
# include <iostream>

int min(int a, int b);
int max(int a, int b);

class Span {
private:
    std::set<int>   _set;
    unsigned int _size;
    unsigned int _filled;
    Span();
public:
    Span(unsigned int n);
    Span(const Span& rhs);
    Span& operator=(const Span& rhs);
    ~Span();

    Span& addNumber(int nbr);
    int shortestSpan() const;
    int longestSpan() const;

    template<typename T>
    Span& betterAddNumber(T begin, T end) {
        while (begin != end && _filled != _size) {
            _set.insert(*begin);
            ++begin;
            ++_filled;
        }
        if (begin != end)
            throw std::overflow_error("The set is full!");
        return *this;
    }

    void print() const;
};


#endif