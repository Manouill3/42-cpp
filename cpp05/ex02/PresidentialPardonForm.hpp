#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm{

    private :

        std::string target;

    public :

        PresidentialPardonForm();
        PresidentialPardonForm(std::string name);
        PresidentialPardonForm(const PresidentialPardonForm &obj);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
        ~PresidentialPardonForm();

        virtual void execute(const Bureaucrat &executor) const;

};

#endif