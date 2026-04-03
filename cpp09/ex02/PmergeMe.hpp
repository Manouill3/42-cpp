#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <sys/time.h>
#include <stdint.h>
#include <deque>

template <typename T>
class PmergeMe {

    private :

        T tab;
        T jacoblist;

        T pend;
        T result;
        T rest;

    public :

        PmergeMe();
        PmergeMe(int ac, char **av);
        PmergeMe(const PmergeMe &obj);
        PmergeMe &operator=(const PmergeMe &obj);
        ~PmergeMe();

        T &get_tab();

        void swap_size(size_t size, int idx1, int idx2);
        void sortPair();
        void merge(size_t size);
        void jacob(size_t size);
        void setVec(size_t size);
        int binary(int val, size_t size);
        void insertPair(int newIdx, int idxPair, size_t size);
        void addPair(T &src, T &dest, size_t size);
        void put_all(T &src, T &dest);

        void print_tab(T tab);
        uint64_t get_micro();
};

#endif