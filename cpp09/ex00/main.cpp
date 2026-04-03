#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    if (ac != 3)
        return 1;
    try {
        std::cout << "Default Constructor" << std::endl;
        std::cout << std::endl;

        BitcoinExchange Bitcoin(av[1]);
        Bitcoin.printVal(av[2]);
        std::cout << std::endl;

        std::cout << "Copy Constructor" << std::endl;
        std::cout << std::endl;
        
        BitcoinExchange Bitcoin2(Bitcoin);
        Bitcoin.printVal(av[2]);
        std::cout << std::endl;

        std::cout << "Assignement Constructor" << std::endl;
        std::cout << std::endl;
        
        BitcoinExchange Bitcoin3 = Bitcoin;
        Bitcoin.printVal(av[2]);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
}