#ifndef SPAN_HPP
# define SPAN_HPP
# include <exception>

class span {
private:
    int* _array;
    int _size;
    int _filled;
    span();
public:
    span(unsigned int n);
    span(const span& rhs);
    span& operator=(const span& rhs);
    ~span();
    class ExceptionSpanIsFull : public std::exception {
    public:
        const char* what() const throw() { return "Composition is already full!"; }
    };
    class ExceptionNoSuchSpan : public std::exception {
    public:
        const char* what() const throw() { return "No such span!"; }
    };
    span& addNumber(int nbr);
    int shortestSpan() const;
    int longestSpan() const;
};

int min(int a, int b);
int max(int a, int b);

#endif