#include "Bureaucrat.hpp"

int main(void) {
    // test fonctionnement de base
    
    Bureaucrat test1 = Bureaucrat("test1", 120);
    
    std::cout << test1 << std::endl;
    test1.decrementGrade();
    std::cout << test1 << std::endl;
    test1.incrementGrade();
    std::cout << test1 << std::endl;

    // test erreur du constructeur

    Bureaucrat test2 = Bureaucrat("test2", 160);
    Bureaucrat test3 = Bureaucrat("test3", 0);

    // test erreur changement de grade

    Bureaucrat test4 = Bureaucrat("test4", 150);
    Bureaucrat test5 = Bureaucrat("test5", 1);

    std::cout << test4 << std::endl;
    test4.decrementGrade();
    std::cout << test4 << std::endl;
    std::cout << test5 << std::endl;
    test5.incrementGrade();
    std::cout << test5 << std::endl;
}
