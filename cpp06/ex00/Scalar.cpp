#include "Scalar.hpp"

Scalar::Scalar() {}

Scalar::Scalar(const Scalar &obj) {}

Scalar &Scalar::operator=(const Scalar &obj) {return *this;}

Scalar::~Scalar() {}

void Scalar::convert(std::string val) {
    std::string strval = val;

    double convD = ConvToD(strval);
    

}

double ConvToD(std::string val) {
    
}
