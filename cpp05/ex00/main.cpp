#include "Bureaucrat.hpp"

int main(void) {
    Bureaucrat manu = Bureaucrat("manu", 149);
    
    std::cout << manu << std::endl;
    manu.decrementGrade();
    std::cout << manu << std::endl;
    manu.decrementGrade();
    std::cout << manu << std::endl;
    manu.incrementGrade();
    std::cout << manu << std::endl;
    for(int i = 0; i < 150; i++)
        manu.incrementGrade();
    std::cout << manu << std::endl;
}