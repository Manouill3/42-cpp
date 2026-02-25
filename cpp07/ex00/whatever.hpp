#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> T max(T x, T y) {
    if (x > y)
        return x;
    return y;
}

template <typename T> T min(T x, T y) {
    if (x < y)
        return x;
    return y;
}

template <typename T> int swap(T &x, T &y) {
    T z = x;
    x = y;
    y = z;
    return 0;
}

#endif