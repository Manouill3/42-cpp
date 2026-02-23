#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

    // test shrubbery creation

    std::cout << std::endl;

    Bureaucrat test6 = Bureaucrat("test6", 148);
    Bureaucrat test7 = Bureaucrat("test7", 75);
    Bureaucrat test8 = Bureaucrat("test8", 27);
    Bureaucrat test9 = Bureaucrat("test9", 5);

    ShrubberyCreationForm form1 = ShrubberyCreationForm("form1");
    std::cout << form1 << std::endl;
    test6.executeForm(form1);
    test6.signForm(form1);
    std::cout << form1 << std::endl;
    test7.executeForm(form1);
    test7.signForm(form1);
    std::cout << form1 << std::endl;
    test7.executeForm(form1);

    // test robotomy request

    std::cout << std::endl;

    RobotomyRequestForm form2 = RobotomyRequestForm("form2");
    std::cout << form2 << std::endl;
    test7.signForm(form2);
    test8.signForm(form2);
    test8.executeForm(form2);

    // test presidential pardon
    
    std::cout << std::endl;

    PresidentialPardonForm form3 = PresidentialPardonForm("form3");
    std::cout << form3 << std::endl;
    test8.signForm(form3);
    test9.signForm(form3);
    test9.executeForm(form3);
}