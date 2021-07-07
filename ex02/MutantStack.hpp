#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <list>
# include <stack>

template<class T>
class MutantStack : public std::stack<T> {
    private:
    public:
        MutantStack<T>() {}
        MutantStack<T>(const MutantStack<T>& rhs) {
            *this = rhs;
        }
        MutantStack<T>& operator=(const MutantStack<T>& rhs) {
            std::stack<T>::operator=(rhs);
        }
        ~MutantStack<T>() {}
        // bool    empty() const { return _innerStack.empty() ? true : false; }
        // unsigned int    size() const { return _innerStack.size(); }
        // const T&    top() const { return *(--_innerStack.end()); }
        // void    push(const T& val) { _innerStack.push_back(val); }
        // void    pop() { _innerStack.pop_back(); }

        typedef typename std::deque<T>::const_iterator iterator;

        iterator    begin() { return this->c.begin(); }
        iterator    end() { return this->c.end(); }

};

#endif