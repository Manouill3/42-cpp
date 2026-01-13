#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name(""), sign_grade(0) , exec_grade(0) {}

Form::Form(std::string name, int sign, int exec) : name(name), sign_grade(sign), exec_grade(exec) {
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

Form::Form(const Form &obj) : name(obj.name), sign_grade(obj.sign_grade), exec_grade(obj.exec_grade) {
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

Form &Form::operator=(const Form &obj) {
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

Form::~Form() {}

std::string Form::get_name() const { return name; }
bool Form::get_isSigned() const { return is_signed; }
int Form::get_signGrade() const { return sign_grade; }
int Form::get_execGrade() const { return exec_grade; }

void Form::beSigned(Bureaucrat &obj) {
    if (obj.getGrade() <= sign_grade)
        is_signed = true;
    else
        throw(GradeTooLowException());
}

const char *Form::GradeTooLowException::what() const throw() {
    return "the grade is too Low !!!";
}

const char *Form::GradeTooHighException::what() const throw() {
    return "the grade is too high !!!";
}

std::ostream &operator<<(std::ostream &output, Form &obj) {
    if (obj.get_isSigned() == true)
        output << obj.get_name() << " is signed and need " << obj.get_execGrade() << " to execute it";
    else
        output << obj.get_name() << " need " << obj.get_signGrade() << " to sign it and " << obj.get_execGrade() << " to execute it";
    return output;
}
