#include "easyfind.hpp"

template<typename T>
int easyfind(T tab, int i) {
    for (int n = 0; tab[n]; n++) {
        if (tab[n] == i)
            return n;
    }
    throw std::exception();
}
