#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void print(const T &var) {
    std::cout << var << std::endl;
}

template <typename T, typename func> void iter(T *arr, const int length, func f) {
    for (int i = 0; i < length; i++)
        f(arr[i]);
}

#endif