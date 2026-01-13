#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("") { grade = 0; }

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
    try {
        if (grade > 150)
            throw(GradeTooLowException());
        else if (grade < 0)
            throw(GradeTooHighException());
        else
            this->grade = grade;
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name) {
    try {
        if (grade > 150)
            throw(GradeTooLowException());
        else if (grade < 0)
            throw(GradeTooHighException());
        else
            grade = obj.grade;
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
    if (this != &obj) {
        try {
            if (grade > 150)
                throw(GradeTooLowException());
            else if (grade < 0)
                throw(GradeTooHighException());
            else
                grade = obj.grade;
        }
        catch(std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

int Bureaucrat::getGrade() const { return grade; }

std::string Bureaucrat::getName() const { return name; }

void Bureaucrat::decrementGrade() {
    try {
        if (grade + 1 > 150)
            throw(GradeTooLowException());
        grade += 1;
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void Bureaucrat::incrementGrade() {
    try {
        if (grade - 1 < 0)
            throw(GradeTooHighException());
        grade -= 1;
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &obj) {
    output << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return output;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "the grade is too high !!!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "the grade is too low !!!";
}

void Bureaucrat::signForm(AForm &form) {
    try {
        form.beSigned(*this);
        if (form.get_isSigned() == true)
            std::cout << name << " signed " << form.get_name() << std::endl;
                
    }
    catch(std::exception &e) {
        std::cout << name << " couldn't sign " << form.get_name() << " because " << e.what() << std::endl;
    }
}
