#include "PmergeMe.hpp"

template <typename T>
PmergeMe<T>::PmergeMe() {}

template <typename T>
PmergeMe<T>::PmergeMe(int ac, char **av) {
    for (int i = 1; i < ac; i++) {
        std::stringstream ss;
        int val;

        ss << av[i];
        ss >> val;
        tab.push_back(val);
    }

    jacoblist.push_back(0);
    jacoblist.push_back(1);
}

template <typename T>
PmergeMe<T>::PmergeMe(const PmergeMe &obj) {
    tab = obj.tab;
    jacoblist = obj.jacoblist;
    pend = obj.pend;
    result = obj.result;
    rest = obj.rest;
}

template <typename T>
PmergeMe<T> &PmergeMe<T>::operator=(const PmergeMe &obj) {
    if (*this != obj) {
        tab = obj.tab;
        jacoblist = obj.jacoblist;
        pend = obj.pend;
        result = obj.result;
        rest = obj.rest;
    }
    return *this;
}

template <typename T>
PmergeMe<T>::~PmergeMe() {}


