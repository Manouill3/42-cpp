#include "RPN.hpp"

int main(int ac, char **av) {
    
    try {
        if (ac != 2)
            throw std::invalid_argument("Error: not enough argument");
        
        RPN exp;
        exp.solve(av[1]);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}