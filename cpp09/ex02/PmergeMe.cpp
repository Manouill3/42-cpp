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

    jacoblist = {0, 1};
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
            std::cout << "pair one : " << tab[i - 1] << " pair two : " << tab[i - pairSize / 2 - 1] << std::endl;
            if (tab[i - 1] < tab[i - pairSize / 2 - 1])
                swap_size(pairSize, i - 1, i - pairSize / 2 - 1);
        }
        pairSize *= 2;
    }
    merge(pairSize);
}

void PmergeMe::setVec(size_t size) {
    result.clear();
    pend.clear();
    rest.clear();

    int r = tab.size() % size;
    while (r > 0) {
        rest.push_back(tab[tab.size() - 1]);
        tab.pop_back();
        r--;
    }

    for (size_t i = size; i < tab.size(); i += size) {
        size_t tmp = size;
        if (i == size || i == size * 2) {
            while (tmp > 0) {
                result.push_back(tab[i - 1 - tmp]);
                tmp--;
            }
        }
        if (i % 2 != 0) {
            while (tmp > 0) {
                pend.push_back(tab[i - 1- tmp]);
                tmp--;
            }
        }
        else {
            while (tmp > 0) {
                result.push_back(tab[i - 1 - tmp]);
                tmp--;
            }
        }
    }
    tab.clear();
}

int PmergeMe::binary(int val, size_t size) {
    int mid = result.size() / 2;



}

void PmergeMe::jacob(size_t size) {
    setVec(size);
    
    int count = 1;
    while (!pend.empty()) {
        int len = jacoblist[count] - jacoblist[count - 1];
        while (len > 0) {
            int idx = binary(pend[len * size], size);
            result.insert(idx, pend[len]);
            len--;
        }
        count++;
        if (count + 1 > jacoblist.size())
            jacoblist.push_back(jacoblist[count] + (jacoblist[count - 1] * 2));
    }
    for (size_t i = 0; i < rest.size(); i++)
        result.push_back(rest[i]);
    tab = result;
}

void PmergeMe::merge(size_t size) {
    while (size >= 0) {
        jacob(size);
        size /= 2;
    }
}
