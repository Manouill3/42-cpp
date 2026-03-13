#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <string.h>

class BitcoinExchange {

    private :

        std::map<std::string, std::string> date;

    public :

        BitcoinExchange();
        BitcoinExchange(std::string data);
        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange &operator=(const BitcoinExchange &obj);
        ~BitcoinExchange();

        void printVal(std::string input);
};

#endif