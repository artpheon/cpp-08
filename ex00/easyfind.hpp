#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& container, int i) {
    typename T::iterator it = std::find(container.begin(),container.end(), i);
    if (it == container.end())
        throw std::out_of_range("out of range");
    return it;
}