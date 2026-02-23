#include "Bureaucrat.hpp"

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

    // test form de base

    std::cout << std::endl;

    Form form1 = Form("form1", 121, 5);

    std::cout << form1 << std::endl;
    test1.signForm(form1);
    std::cout << form1 << std::endl;

    // test Bureaucrat grade too low

    std::cout << std::endl;

    Form form2 = Form("form2", 1, 1);

    test1.signForm(form2);

    // test erreur constructeur form

    std::cout << std::endl;

    Form form3 = Form("form3", 0, 14);
    Form form4 = Form("form4", 160, 14);
    Form form5 = Form("form5", 12, 0);
    Form form6 = Form("form6", 15, 151);
}