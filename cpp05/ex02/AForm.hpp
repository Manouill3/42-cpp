#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class AForm {

    protected :

        const std::string name;
        bool is_signed;
        const int sign_grade;
        const int exec_grade;

    public :

        AForm();
        AForm(std::string name, int sign_grade, int exec_grade);
        AForm(const AForm &obj);
        AForm &operator=(const AForm &obj);
        ~AForm();

        std::string get_name() const;
        bool get_isSigned() const;
        int get_signGrade() const;
        int get_execGrade() const;

        virtual void beSigned(Bureaucrat &obj) = 0;

        class GradeTooLowException : public std::exception {

            public :

                virtual const char *what() const throw();
        };

        class GradeTooHighException : public std::exception {

            public :

                virtual const char *what() const throw();
        };

        virtual void execute(const Bureaucrat &executor) const;

};

std::ostream &operator<<(std::ostream &output, AForm &obj);

#endif