#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void modifystr(T &val) {
    val += "test";
}

template <typename T> void modify(T &val) {
    val += 1;
}

template <typename T> void print(const T &var) {
    std::cout << var << " ";
}

template <typename T> void iter(const T *arr, const int length, void (*f)(const T&)) {
    for (int i = 0; i < length; i++)
        f(arr[i]);
}

template <typename T> void iter(T *arr, const int length, void (*f)(T&)) {
    for (int i = 0; i < length; i++)
        f(arr[i]);
}

#endif