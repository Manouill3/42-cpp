#include "easyfind.hpp"

template<typename T>
void easyfind(T &tab, int i) {
    try {
        typename T::iterator it = std::find(tab.begin(), tab.end(), i);
        if (it != tab.end())
            std::cout << "Value found : " << *it << std::endl;
        else
            throw std::invalid_argument("ERROR: no occurrence in this container");
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
