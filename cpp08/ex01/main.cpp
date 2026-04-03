#include "Span.hpp"

int main() {
    try {
        Span sp = Span(5);
        
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::vector<int> tab = sp.getTab();
        for (int i = 0; i < 5; i++)
            std::cout << tab[i] << " ";
        std::cout << std::endl;
        std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
        std::cout << "longest span : " << sp.longestSpan() << std::endl;

        std::cout << std::endl;

        Span test(10000);
        srand(time(0));
        for(int i = 0; i < 10000; i++) {
            test.addNumber(rand() % 10000);
        }   
        std::cout << "shortest span : " << test.shortestSpan() << std::endl;
        std::cout << "longest span : " << test.longestSpan() << std::endl;

        std::cout << std::endl;

        Span test2(5);
        
        test2.addMultiple(0, sp.getTab());
        std::cout << "shortest span : " << test2.shortestSpan() << std::endl;
        std::cout << "longest span : " << test2.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}
