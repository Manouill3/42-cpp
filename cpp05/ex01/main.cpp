#include "Bureaucrat.hpp"

int main(void) {
    Bureaucrat manu = Bureaucrat("manu", 14);
    Form a = Form("a", 12, 34);

    std::cout << a << std::endl;
    manu.signForm(a);
    std::cout << a << std::endl;
}