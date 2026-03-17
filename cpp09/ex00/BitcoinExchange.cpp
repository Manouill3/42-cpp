#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string dataname) {
    std::ifstream data(dataname.c_str());
    std::string line;
    double val;
    
    if (!data)
        throw std::invalid_argument("Error: failed to open file");
    getline(data, line);
    while (getline(data, line)) {
        std::stringstream ss;

        std::string tok1 = strtok((char *)line.c_str(), ",");
        std::string tok2 = strtok(NULL, ",");

        ss << tok2;
        ss >> val;
        if (val < 0)
            throw std::exception();
        date.insert(std::make_pair(tok1, val));
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj) {
    date = obj.date;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj) {
    if (this != &obj)
        date = obj.date;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::handle_error(double val) {
    if (val < 0)
        throw std::invalid_argument("Error: not a positive number");
    if (val > 1000)
        throw std::invalid_argument("Error: value above 1000");
    
}

void BitcoinExchange::loop(std::string line) {
    std::stringstream ss;
    double val;

    std::string tok1 = strtok((char *)line.c_str(), " | ");
    std::string tok2 = strtok(NULL, " | ");
    ss << tok2;
    ss >> val;
    
    handle_error(val);
    
    if (date.count(tok1) == 0) {
        double finalVal = 0;
        
        for (std::map<std::string, double>::iterator it = date.begin(); it != date.end(); it++) {
            if (tok1 < it->first) {
                if (it == date.begin())
                    throw std::invalid_argument("ERROR, Date not found !");
                it--;
                finalVal = it->second;
                break;
            }
        }
        std::cout << tok1 << " => " << finalVal << " = " << finalVal * val << std::endl;
    }
    else
        std::cout << tok1 << " => " << tok2 << " = " << date[tok1] * val << std::endl;
}

void BitcoinExchange::printVal(std::string input) {
    std::ifstream file(input.c_str());
    std::string line;
    
    if (!file)
        throw std::invalid_argument("Error: failed to open file");
    getline(file, line);
    while (getline(file, line)) {
        try {
            loop(line);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
}
