#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    if (ac != 3)
        return 1;
        
    BitcoinExchange Bitcoin(av[1]);
    Bitcoin.printVal(av[2]);
}