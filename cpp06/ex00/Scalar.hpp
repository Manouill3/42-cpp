#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <string>

class Scalar {

    private :

        Scalar();
        Scalar(const Scalar &obj);
        Scalar &operator=(const Scalar &obj);
        ~Scalar();

    public :

        static void convert(std::string val);
};

double ConvToD(std::string val);    

#endif