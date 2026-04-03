#include "PmergeMe.tpp"

int main(int ac, char **av) { 
    try {
        PmergeMe< std::vector<int> > test(ac, av);
        
        std::cout << "before: ";
        test.print_tab(test.get_tab());
        uint64_t start = test.get_micro();
        test.sortPair();
        uint64_t end = test.get_micro();
        std::cout << "After: ";
        test.print_tab(test.get_tab());
        
        std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector<int> : " << end - start << " us" << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        PmergeMe< std::deque<int> > test(ac, av);
        uint64_t start = test.get_micro();
        test.sortPair();
        uint64_t end = test.get_micro();
        std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque<int> : " << end - start << " us" << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
