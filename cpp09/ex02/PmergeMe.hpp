#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <sstream>

class PmergeMe {

    private :

        std::vector<int> tab;
        std::vector<int> jacoblist;

        std::vector<int> pend;
        std::vector<int> result;
        std::vector<int> rest;

    public :

        PmergeMe();
        PmergeMe(int ac, char **av);
        PmergeMe(const PmergeMe &obj);
        PmergeMe &operator=(const PmergeMe &obj);
        ~PmergeMe();

        void sortPair();
        void swap_size(size_t size, int idx1, int idx2);

        void merge(size_t size);
        void jacob(size_t size);
        void setVec(size_t size);
        int binary(int val, size_t size);
        void addPair(int newIdx, int idxPair, size_t size);
};

#endif