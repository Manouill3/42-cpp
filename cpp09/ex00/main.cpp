#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    if (ac != 3)
        return 1;
    try {
        BitcoinExchange Bitcoin(av[1]);
        Bitcoin.printVal(av[2]);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
}