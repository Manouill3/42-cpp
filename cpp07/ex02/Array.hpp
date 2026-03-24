#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>

template<typename T> class Array {

    private :

        T *array;
        unsigned int n;

    public :

        Array();
        Array(unsigned int n);
        Array(const Array &obj);
        Array &operator=(const Array &obj);
        ~Array();

        unsigned int size();
        T &operator[](unsigned int i);
        
};

#endif