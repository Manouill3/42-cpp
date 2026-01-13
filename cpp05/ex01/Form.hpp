#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class Form {

    private :

        const std::string name;
        bool is_signed;
        const int sign_grade;
        const int exec_grade;

    public :

        Form();
        Form(std::string name, int sign_grade, int exec_grade);
        Form(const Form &obj);
        Form &operator=(const Form &obj);
        ~Form();

        std::string get_name() const;
        bool get_isSigned() const;
        int get_signGrade() const;
        int get_execGrade() const;

        void beSigned(Bureaucrat &obj);

        class GradeTooLowException : public std::exception {

            public :

                virtual const char *what() const throw();
        };

        class GradeTooHighException : public std::exception {

            public :

                virtual const char *what() const throw();
        };

};

std::ostream &operator<<(std::ostream &output, Form &obj);

#endif