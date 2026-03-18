#include "RPN.hpp"

int main(int ac, char **av) {
    if (ac != 2)
        return 1;
    RPN exp;

    exp.solve(av[1]);
}