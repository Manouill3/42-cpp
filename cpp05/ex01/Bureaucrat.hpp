#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat {

    private :

        int grade;
        const std::string name;

    public :

        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        ~Bureaucrat();

        int getGrade() const;
        std::string getName() const;

        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException : public std::exception {

            public :
        
                virtual const char *what() const throw();

        };

        class GradeTooLowException : public std::exception {

            public :
        
                virtual const char *what() const throw();

        };

        void signForm(Form &form);
};


std::ostream &operator<<(std::ostream &output, const Bureaucrat &obj);

#endif