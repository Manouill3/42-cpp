#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &obj) {}

Intern &Intern::operator=(const Intern &obj) { return *this; }

Intern::~Intern() {}

AForm *Intern::makeForm(std::string formType, std::string target) {
    int index;

    std::string type[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 4; i++) {
        if (type[i] == formType)
            index = i;
    }
    
    switch (index) {
        case 0:
            std::cout << "Intern created shrubbery creation form !" << std::endl;
            return new ShrubberyCreationForm(target);
        case 1:
            std::cout << "Intern created robotomy request form !" << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern created presidential pardon form !" << std::endl;
            return new PresidentialPardonForm(target);
        default:
            std::cout << "The provide form type does not exist ! Choose between shrubbery creation, robotomy request or presidential pardon." << std::endl;
            break;
    }
}
