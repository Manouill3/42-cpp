#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    try {
        if (ac != 2)
            throw std::invalid_argument("Error: could not open file.");

        BitcoinExchange Bitcoin("data.csv");
        Bitcoin.printVal(av[1]);
        std::cout << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
}