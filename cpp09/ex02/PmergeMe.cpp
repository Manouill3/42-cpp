#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(int ac, char **av) {
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

PmergeMe::PmergeMe(const PmergeMe &obj) {(void)obj;}

PmergeMe &PmergeMe::operator=(const PmergeMe &obj) {(void)obj; return *this;}

PmergeMe::~PmergeMe() {}

void PmergeMe::swap_size(size_t size, int idx1, int idx2) {
    for (size_t i = 0; i < size / 2; i++) {
        int swap;

        swap = tab[idx1 - i];
        tab[idx1 - i] = tab[idx2 - i];
        tab[idx2 - i] = swap;
    }
}

void PmergeMe::sortPair() {
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

void PmergeMe::merge(size_t size) {
    while (size > 0) {
        jacob(size);
        size /= 2;
    }
}

void PmergeMe::jacob(size_t size) {
    setVec(size);

    size_t count = 1;
    while (!pend.empty()) {
        int len = jacoblist[count] - jacoblist[count - 1];
        while (len > 0) {
            int idx = binary(pend[len * size - 1], size);
            addPair(idx, len * size, size);
            len--;
        }
        count++;
        if (count + 1 > jacoblist.size())
            jacoblist.push_back(jacoblist[count] + (jacoblist[count - 1] * 2));
    }
    for (size_t i = 0; i < rest.size(); i++)
        result.push_back(rest[i]);
    tab = result;

    for (size_t i = 0; i < tab.size(); i++)
        std::cout << tab[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::setVec(size_t size) {
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

int PmergeMe::binary(int val, size_t size) {
    std::vector<int> max;

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

void PmergeMe::addPair(int newIdx, int idxPair, size_t size) {
    
    for (size_t i = idxPair; i > idxPair - size; i--)
        result.insert(result.begin() + newIdx * size, pend[i - 1]);

    for (size_t i = idxPair; i > idxPair - size; i--)
        pend.erase(pend.begin() + i - 1);

}


