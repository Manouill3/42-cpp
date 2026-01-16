#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"

int main(void) {
    ShrubberyCreationForm form("shrub");
    Bureaucrat manu("manu", 138);
    
    form.execute(manu);
}