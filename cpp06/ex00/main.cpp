#include "Scalar.hpp"

int main(int ac, char **av) {
    try {
        if (ac == 2)
            Scalar::convert(av[1]);
        else
            throw std::exception();
    }
    catch(...) {
        std::cout << "wrong number of arg or invalid arg" << std::endl;
    }
}