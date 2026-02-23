#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <limits>

class Scalar {

    private :

        Scalar();
        Scalar(const Scalar &obj);
        Scalar &operator=(const Scalar &obj);
        ~Scalar();

    public :

        static void convert(std::string val);
};

#endif