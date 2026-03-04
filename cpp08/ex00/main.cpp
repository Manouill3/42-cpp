#include "easyfind.tpp"

int main(void) {
    int tab[] = {1, 1, 1, 4, 5};
    try {
        std::cout << easyfind(tab, 2) << std::endl;
    } catch (...) {
        std::cout << "no occurrence in this container" << std::endl;
    }
}