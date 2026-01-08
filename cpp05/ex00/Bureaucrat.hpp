#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {

private :

    int grade;
    const std::string name;

public :

    Bureaucrat();
    Bureaucrat(const Bureaucrat &obj);
    Bureaucrat &operator=(const Bureaucrat &obj);
    ~Bureaucrat();

    void GradeTooHighException();
    void GradeTooLowException();

    int getGrade();
    std::string getName();

    void incrementGrade();
    void decrementGrade();
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &obj);

#endif