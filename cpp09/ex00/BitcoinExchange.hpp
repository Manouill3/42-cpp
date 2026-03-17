#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <string.h>
#include <sstream>

class BitcoinExchange {

    private :

        std::map<std::string, double> date;

    public :

        BitcoinExchange();
        BitcoinExchange(std::string data);
        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange &operator=(const BitcoinExchange &obj);
        ~BitcoinExchange();

        void printVal(std::string input);
        void loop(std::string line);
        void handle_error(double val);
};

#endif