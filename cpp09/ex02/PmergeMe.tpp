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
    jacoblist.push_back(1);

    T tmp = tab;
    std::sort(tmp.begin(), tmp.end());
    for (typename T::iterator it = tmp.begin(); it < tmp.end() - 1; it++) {
        if (*it == *(it + 1))
            throw std::invalid_argument("Error: Duplicate number");
    }
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

template <typename T>
void PmergeMe<T>::swap_size(size_t size, int idx1, int idx2) {
    for (size_t i = 0; i < size / 2; i++) {
        int swap;

        swap = tab[idx1 - i];
        tab[idx1 - i] = tab[idx2 - i];
        tab[idx2 - i] = swap;
    }
}

template <typename T>
void PmergeMe<T>::sortPair() {
    size_t pairSize = 2;

    while (pairSize <= tab.size()) {
        for (size_t i = pairSize; i <= tab.size(); i += pairSize) {
            if (tab[i - 1] < tab[i - pairSize / 2 - 1])
                swap_size(pairSize, i - 1, i - pairSize / 2 - 1);
        }
        pairSize *= 2;
    }

    merge(pairSize / 2);
}

template <typename T>
void PmergeMe<T>::merge(size_t size) {
    while (size > 0) {
        jacob(size);
        size /= 2;
    }
}

template <typename T>
void PmergeMe<T>::setVec(size_t size) {
    result.clear();
    pend.clear();
    rest.clear(); 

    int r = tab.size() % size;
    int count = 0;
    for (size_t i = size; i <= tab.size() - r; i += size) {
        size_t tmp = size;

        if (i == size || i == size * 2) {
            while (tmp > 0) {
                result.push_back(tab[i - tmp]);
                tmp--;
            }
        }
        else if (count % 2 == 0) {
            while (tmp > 0) {
                pend.push_back(tab[i - tmp]);
                tmp--;
            }
            count++;
        }
        else {
            while (tmp > 0) {
                result.push_back(tab[i - tmp]);
                tmp--;
            }
            count++;
        }
    }
    for (size_t i = tab.size() - r; i < tab.size(); i++)
        rest.push_back(tab[i]);
}

template <typename T>
void PmergeMe<T>::jacob(size_t size) {
    setVec(size);

    size_t count = 1;
    while (!pend.empty()) {
        int len = jacoblist[count] - jacoblist[count - 1];
        if (len * size - 1 > pend.size()) {
            len = pend.size() / size;
        }
        while (len > 0 && !pend.empty()) {
            int idx = binary(pend[len * size - 1], size);
            insertPair(idx, len * size - 1, size);
            len--;
        }
        if (count + 2 > jacoblist.size())
            jacoblist.push_back(jacoblist[count] + (jacoblist[count - 1] * 2));
        count++;
    }
    for (size_t i = 0; i < rest.size(); i++)
        result.push_back(rest[i]);
    tab = result;

}

template <typename T>
int PmergeMe<T>::binary(int val, size_t size) {
    T max;

    for (size_t i = size; i <= result.size(); i += size)
        max.push_back(result[i - 1]);

    int beg = 0;
    int end = max.size();
    int m;
    while (beg <= end) {
        m = beg + (end - beg) / 2;
        if (beg >= end)
            break;
        if (max[m] < val)
            beg = m + 1;
        else if (m > 0 && max[m - 1] > val)
            end = m - 1;
        else
            break ;
    }
    
    return m;
}

template <typename T>
void PmergeMe<T>::put_all(T &src, T &dest) {
    for (size_t i = 0; i < src.size(); i++) {
        dest.push_back(src[i]);
    }

    src.clear();
}

template <typename T>
void PmergeMe<T>::addPair(T &src, T &dest, size_t size) {
    if (size > src.size())
        return ;
    for (size_t i = 0; i < size; i++)
        dest.push_back(src[i]);
    for (size_t i = size - 1; i > 0; i--)
        src.erase(src.begin() + i);
    src.erase(src.begin());
}

template <typename T>
void PmergeMe<T>::insertPair(int newIdx, int idxPair, size_t size) {
    T tmp;

    for (int i = 0; i < newIdx; i++)
        addPair(result, tmp, size);

    for (int i = idxPair - size + 1; i <= idxPair; i++)
        tmp.push_back(pend[i]);
    for (size_t i = 0; i < size; i++)
        pend.erase(pend.begin() + idxPair - i);

    put_all(result, tmp);
    result = tmp;
}

template <typename T>
void PmergeMe<T>::print_tab(T tab) {
    for (typename T::iterator it = tab.begin(); it < tab.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

template <typename T>
uint64_t PmergeMe<T>::get_micro() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (tv.tv_sec * 1000000 + tv.tv_usec);
}

template <typename T>
T &PmergeMe<T>::get_tab() {return tab;}
