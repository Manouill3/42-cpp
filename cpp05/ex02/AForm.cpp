#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name(""), sign_grade(0) , exec_grade(0) {}

AForm::AForm(std::string name, int sign, int exec) : name(name), sign_grade(sign), exec_grade(exec) {
    is_signed = false;
    try {
        if (sign_grade > 150 || exec_grade > 150)
            throw(GradeTooLowException());
        else if (sign_grade < 0 || exec_grade < 0)
            throw(GradeTooHighException());
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

AForm::AForm(const AForm &obj) : name(obj.name), sign_grade(obj.sign_grade), exec_grade(obj.exec_grade) {
    is_signed = obj.is_signed;
    try {
        if (sign_grade > 150 || exec_grade > 150)
            throw(GradeTooLowException());
        else if (sign_grade < 0 || exec_grade < 0)
            throw(GradeTooHighException());
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

AForm &AForm::operator=(const AForm &obj) {
    if (this != &obj) {
        is_signed = obj.is_signed;
        try {
            if (sign_grade > 150 || exec_grade > 150)
                throw(GradeTooLowException());
            else if (sign_grade < 0 || exec_grade < 0)
                throw(GradeTooHighException());
        }
        catch(std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    return *this;
}

AForm::~AForm() {}

std::string AForm::get_name() const { return name; }
bool AForm::get_isSigned() const { return is_signed; }
int AForm::get_signGrade() const { return sign_grade; }
int AForm::get_execGrade() const { return exec_grade; }

void AForm::beSigned(Bureaucrat &obj) {
    if (obj.getGrade() <= sign_grade)
        is_signed = true;
    else
        throw(GradeTooLowException());
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "the grade is too Low !!!";
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "the grade is too high !!!";
}

std::ostream &operator<<(std::ostream &output, AForm &obj) {
    if (obj.get_isSigned() == true)
        output << obj.get_name() << " is signed and need " << obj.get_execGrade() << " to execute it";
    else
        output << obj.get_name() << " need " << obj.get_signGrade() << " to sign it and " << obj.get_execGrade() << " to execute it";
    return output;
}
