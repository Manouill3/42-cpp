#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data {
    
    public :
    
        Data();
        Data(std::string str);
        Data(const Data &obj);
        Data &operator=(const Data &obj);
        ~Data();
        std::string data;
};

#endif