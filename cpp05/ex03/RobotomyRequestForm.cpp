#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm(name, 72, 45) { target = name; }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj) { target = obj.target; }

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) {
    if (this != &obj)
        target = obj.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    try {
        if (is_signed == false)
            throw(FormNotSigned());
        else {
            std::cout << executor.getName() << " executed " << name << std::endl;
            std::cout << "*** some drilling noises ***" << std::endl;
            int randomNumber = rand() % 2;
            if (randomNumber == 0)
                std::cout << target << " has been robotomized by " << executor.getName() << std::endl;
            else
                std::cout << "The robotomy failed";
        }
    }
    catch(std::exception &e) {
        std::cout << executor.getName() << " couldn't execute it because " << e.what() << std::endl;
    }
}
