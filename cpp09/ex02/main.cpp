#include "PmergeMe.tpp"

int main(int ac, char **av) { 
    
    try {
        
        if (ac < 2)
            throw std::invalid_argument("Error: not enough argument");
        
        PmergeMe< std::vector<int> > test(ac, av);
        
        std::cout << "before: ";
        test.print_tab(test.get_tab());
        uint64_t start = test.get_micro();
        test.sortPair();
        uint64_t end = test.get_micro();
        std::cout << "After: ";
        test.print_tab(test.get_tab());
        
        std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector<int> : " << end - start << " us" << std::endl;

        PmergeMe< std::deque<int> > testd(ac, av);
        
        uint64_t startd = testd.get_micro();
        testd.sortPair();
        uint64_t endd = testd.get_micro();
        
        std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque<int> : " << endd - startd << " us" << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

}
