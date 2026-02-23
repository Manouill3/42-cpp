#include "Data.hpp"

Data::Data() {}

Data::Data(std::string str) {data = str;}

Data::Data(const Data &obj) {(void)obj;}

Data &Data::operator=(const Data &obj) {(void)obj; return *this;}

Data::~Data() {}