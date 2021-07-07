#ifndef SPAN_HPP
# define SPAN_HPP
# include <stdexcept>
# include <iterator>
# include <set>
# include <iostream>

int min(int a, int b);
int max(int a, int b);

class span {
private:
    std::set<int>   _set;
    unsigned int _size;
    unsigned int _filled;
    span();
public:
    span(unsigned int n);
    span(const span& rhs);
    span& operator=(const span& rhs);
    ~span();

    span& addNumber(int nbr);
    int shortestSpan() const;
    int longestSpan() const;

    void print() {
        std::set<int>::const_iterator it = _set.begin();
        std::cout << "set:" << std::endl;
        for(; it != _set.end(); it++) {
            std::cout << *it << std::endl;
        }
        std::cout << "end;" << std::endl;
    }
};


#endif