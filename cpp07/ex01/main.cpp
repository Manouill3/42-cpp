#include <iostream>
#include "iter.hpp"

int main(void) {
    try {
        std::cout << "TEST INT :" << std::endl;
        std::cout << std::endl;
        
        int arr[] = {1, 2, 3, 4, 5};
    
        iter(arr, 5, print);
        iter(arr, 5, modify);
        std::cout << std::endl;
        iter(arr, 5, print);
        std::cout << std::endl;

        const int carr[] = {1, 2, 3, 4, 5};
    
        std::cout << std::endl;
        iter(carr, 5, print);
        std::cout << std::endl;

        std::cout << std::endl;
        std::cout << "TEST STRING :" << std::endl;
        std::cout << std::endl;

        std::string strtab[] = {"je", "suis", "une", "valeur", "test"};
    
        iter(strtab, 5, print);
        iter(strtab, 5, modifystr);
        std::cout << std::endl;
        iter(strtab, 5, print);
        std::cout << std::endl;

        const std::string strconsttab[] = {"je", "suis", "une", "valeur", "test"};
    
        std::cout << std::endl;
        iter(strconsttab, 5, print);
        std::cout << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}