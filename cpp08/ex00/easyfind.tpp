#include "easyfind.hpp"

template<typename T>
int easyfind(T tab, int i) {
    try {
        if (tab.find(i))
            return tab.find(i);
        throw std::invalid_argument("ERROR: no occurrence int this container");
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
