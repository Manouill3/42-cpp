#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm(name, 145, 137) { target = name; }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj) { target = obj.target; }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
    if (this != &obj)
        target = obj.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    try {
        if (is_signed == false)
            throw(FormNotSigned());
        else {
            std::string outfile_name;
        
            outfile_name = target + "_shrubbery";
            std::ofstream outfile(outfile_name.c_str());
            outfile << "       _-_\n"       
                    << "    /~~   ~~\\\n"
                    << " /~~         ~~\\\n"
                    << "{               }\n"
                    << " \\  _-     -_  /\n"
                    << "   ~  \\\\ //  ~\n"
                    << "_- -   | | _- _\n"
                    << "  _ -  | |   -_\n"
                    << "      // \\\\\n";
        
            outfile << "              v .   ._, |_  .,\n"
                    << "           `-._\\/  .  \\ /    |/_\n"
                    << "               \\  _\\, y | \\//\n"
                    << "         _\\_.___\\, \\/ -.\\||\n"
                    << "           `7-,--.`._||  / / ,\n"
                    << "           /'     `-. `./ / |/_.'\n"
                    << "                     |    |//\n"
                    << "                     |_    /\n"
                    << "                     |-   |\n"
                    << "                     |   =|\n"
                    << "                     |    |\n"
                    << "--------------------/ ,  . \\--------._\n";
        
            std::cout << executor.getName() << " executed " << name << std::endl;
        }
    }
    catch(std::exception &e) {
        std::cout << executor.getName() << " couldn't execute it because " << e.what() << std::endl;
    }
}
