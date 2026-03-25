#include "Array.hpp"

template<typename T>
Array<T>::Array() {
    array = new T[0];
    n = 0;
}

template<typename T>
Array<T>::Array(unsigned int n) {
    array = new T[n];
    this->n = n;
}

template<typename T>
Array<T>::Array(const Array &obj) {
    n = obj.n;
    array = new T[obj.n];
    for (unsigned int i = 0; i < n; i++)
        array[i] = obj.array[i];
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &obj) {
    if (this != &obj) {
        delete[] array;
        n = obj.n;
        array = new T[obj.n];
        for (int i = 0; i < n; i++)
            array[i] = obj.array[i];
    }
    return *this;
}

template<typename T>
Array<T>::~Array() {
    delete[] array;
}

template<typename T>
unsigned int Array<T>::size() {
    return n;
}

template<typename T>
T &Array<T>::operator[](unsigned int i) {
    if (i >= n)
        throw std::exception();
    return array[i];
}