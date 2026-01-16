#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : AForm(name, 25, 5) { target = name; }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj) { target = obj.target; }

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) {
    if (this != &obj)
        target = obj.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    try {
        if (is_signed == false)
            throw(FormNotSigned());
        else {
            std::cout << executor.getName() << " executed " << name << std::endl;
            std::cout << "target" << " has been pardoned by Zaphod Beeblebrox" << std::endl;
        }
    }
    catch(std::exception &e) {
        std::cout << executor.getName() << " couldn't execute it because " << e.what() << std::endl;
    }
}
