#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string dataname) {
    std::ifstream data(dataname.c_str());
    std::string line;
    
    if (!data)
        throw std::exception();
    while (getline(data, line)) {
        char *tok1 = strtok((char *)line.c_str(), ",");
        char *tok2 = strtok(NULL, ",");

        date.insert(std::make_pair(tok1, tok2));
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj) {(void)obj;}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj) {(void)obj; return *this;}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::printVal(std::string input) {
    
}
