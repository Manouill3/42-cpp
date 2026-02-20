#include "Scalar.hpp"

Scalar::Scalar() {}

Scalar::Scalar(const Scalar &obj) {(void)obj;}

Scalar &Scalar::operator=(const Scalar &obj) {
    (void) obj;
    return *this;
}

Scalar::~Scalar() {}

double ConvToD(std::string val) {
    double res;
    std::stringstream ss;

    if (val.length() == 1) {
        if (val[0] > 47 && val[0] < 58) {
            ss << val;
            ss >> res;
            return res;
        }
        res = static_cast<double>(val[0]);
        return res;
    }
    ss << val;
    ss >> res;
    return res;
}

void Scalar::convert(std::string val) {
    std::string strval = val;

    double convD = ConvToD(strval);
    if (convD == 0 && val.length() > 1) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return ;
    }
    if (convD > 6 && convD < 127)
        std::cout << "char: " << static_cast<char>(convD) << std::endl;
    else
        std::cout << "char: " << "non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(convD) << std::endl;
    std::cout << "float: " << static_cast<float>(convD) << "f" << std::endl;
    std::cout << "double: " << convD << std::endl;
}
