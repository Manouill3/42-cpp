#include "Scalar.hpp"

Scalar::Scalar() {}

Scalar::Scalar(const Scalar &obj) {(void)obj;}

Scalar &Scalar::operator=(const Scalar &obj) {
    (void) obj;
    return *this;
}

Scalar::~Scalar() {}

long double ConvToD(std::string val) {
    long double res;
    std::stringstream ss;

    if (val.length() == 1) {
        if (val[0] > 47 && val[0] < 58) {
            ss << val;
            ss >> res;
            return res;
        }
        res = static_cast<long double>(val[0]);
        return res;
    }
    ss << val;
    ss >> res;
    return res;
}

int handle_error(std::string val, int nb) {
    if (nb == 0)
        return 0;
    if (nb == 1) {
        if (val.find('.'))
            return 0;
    }
    if (nb == 2) {
        if (val.find('.') && val[val.length() - 1] == 'f')
            return 0;
    }
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
    return 1;
}

int handle_case(std::string val) {
    if (val == "inf" || val == "+inf" || val == "-inf") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << val << "f" << std::endl;
        std::cout << "double: " << val << std::endl;
        return 1;
    }
    if (val == "inff" || val == "+inff" || val == "-inff") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << val << std::endl;
        val[val.length() - 1] = '\0';
        std::cout << "double: " << val << std::endl;
        return 1;
    }
    if (val == "nan") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << val << "f" << std::endl;
        std::cout << "double: " << val << std::endl;
        return 1;
    }
    if (val == "nanf") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << val << std::endl;
        val[val.length() - 1] = '\0';
        std::cout << "double: " << val << std::endl;
        return 1;
    }
    return 0;
}

int handle_overflow(long double conv) {
    if (conv > std::numeric_limits<double>::max() || conv < -std::numeric_limits<double>::max()) {
        std::cout << "char: " << "non displayable" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return 1;
    }
    if (conv > std::numeric_limits<float>::max() || conv < -std::numeric_limits<float>::max()) {
        std::cout << "char: " << "non displayable" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: " << static_cast<double>(conv) << std::endl;
        return 1;
    }
    if (conv > std::numeric_limits<int>::max() || conv < -std::numeric_limits<int>::max() - 1) {
        std::cout << "char: " << "non displayable" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << static_cast<float>(conv) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(conv) << std::endl;
        return 1;
    }
    return 0;
}

void Scalar::convert(std::string val) {
    int nb_char = 0;
    std::string strval = val;
    
    if (!val.length())
        throw std::exception();
    long double convD = ConvToD(strval);
    for (size_t i = 0; i < val.length(); i++) {
        if (val[i] < 48 || val[i] > 57)
            nb_char++;
    }
    if (handle_case(val) == 1)
        return ;
    if (handle_error(val, nb_char) == 1)
        return ;
    if (handle_overflow(convD) == 1)
        return ;
    if (convD > 6 && convD < 127)
        std::cout << "char: " << static_cast<char>(convD) << std::endl;
    else
        std::cout << "char: " << "non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(convD) << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(convD) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(convD) << std::endl;
}
