#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
    // test bureaucrat de base
    
    std::cout << std::endl;

    Bureaucrat test1 = Bureaucrat("test1", 120);
    
    std::cout << test1 << std::endl;
    test1.decrementGrade();
    std::cout << test1 << std::endl;
    test1.incrementGrade();
    std::cout << test1 << std::endl;

    // test erreur du constructeur

    std::cout << std::endl;

    Bureaucrat test2 = Bureaucrat("test2", 160);
    Bureaucrat test3 = Bureaucrat("test3", 0);

    // test erreur changement de grade

    std::cout << std::endl;

    Bureaucrat test4 = Bureaucrat("test4", 150);
    Bureaucrat test5 = Bureaucrat("test5", 1);

    test4.decrementGrade();
    test5.incrementGrade();

    Intern tmp;
    delete tmp.makeForm("unknow", "manuarii");
    delete tmp.makeForm("shrubbery creation", "manuarii");
    delete tmp.makeForm("robotomy request", "manuarii");
    delete tmp.makeForm("presidential pardon", "manuarii");

}