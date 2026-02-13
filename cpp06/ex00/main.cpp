#include "Scalar.hpp"

int main(int ac, char **av) {
    if (ac == 2)
        Scalar::convert(av[1]);
}