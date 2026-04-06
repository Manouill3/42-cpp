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
            throw std::invalid_argument("Error: negative value");
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

int is_leap(int y) {
    if (y % 4 == 0)
        return 1;
    return 0;
}

int parse_date(std::string tok1) {
    if (tok1[tok1.size() - 1] == '-')
        throw (std::invalid_argument("Error: bad input => " + tok1));

    std::string sty = strtok((char *)tok1.c_str(), "-");
    std::string stm = strtok(NULL, "-");
    std::string std = strtok(NULL, "-");
    
    if (sty.size() != 4 || stm.size() != 2 || std.size() != 2 )
        throw (std::invalid_argument("Error: bad input => " + sty + "-" + stm + "-" + std));

    std::stringstream ssy;
    int y;
    ssy << sty;
    ssy >> y;

    std::stringstream ssm;
    int m;
    ssm << stm;
    ssm >> m;

    std::stringstream ssd;
    int d;
    ssd << std;
    ssd >> d;
    
    if (y < 1 || m < 1 || m > 12)
        return 1;

    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (is_leap(y)) {
        if (m == 1 && (d < 1 || d > 29))
            return 1;
    }
    if (d > days[m - 1] || d < 1)
        return 1;
    return 0;
    
}

void BitcoinExchange::handle_error(double val) {
    if (val < 0)
        throw std::invalid_argument("Error: not a positive number");
    if (val > 1000)
        throw std::invalid_argument("Error: too large number");
}

void BitcoinExchange::loop(std::string line) {
    std::stringstream ss;
    double val = 0;
    std::string tok1;
    std::string tok2;

    if (line.find(" | ") != std::string::npos) {
        int pos = line.find(" ");
        if ((int)line.size() - pos < 3)
            throw std::invalid_argument("Error: bad input => " + line);
        if (line[pos + 1] != '|' || line[pos + 2] != ' ')
            throw std::invalid_argument("Error: bad input => " + line);
        if (!isdigit(line[pos + 3]))
            throw std::invalid_argument("Error: bad input => " + line);
        tok1 = strtok((char *)line.c_str(), " | ");
        tok2 = strtok(NULL, " | ");
        ss << tok2;
        ss >> val;
    } 
    else {
        std::cout << "Error: bad input => " << line << std::endl;
        return ;
    }

    if (tok2.find(".") != std::string::npos && tok2.find(".", tok2.find(".") + 1) != std::string::npos) {
        throw std::invalid_argument("Error: bad input => " + line);
    }

    for (int i = 0; i < (int)tok2.size(); i++)
        if (!isdigit(tok2[i]) && tok2[i] != '.')
            throw std::invalid_argument("Error: bad input => " + line);

    if (parse_date(tok1)) {
        std::cout << "Error: bad input => " << tok1 << std::endl;
        return;
    }
    handle_error(val);
    
    if (date.count(tok1) == 0) {
        double finalVal = 0;
        
        for (std::map<std::string, double>::iterator it = date.begin(); it != date.end(); it++) {
            if (tok1 < it->first) {
                if (it == date.begin()) {
                    std::cout << "Error: bad input => " << tok1 << std::endl;
                        return;
                }
                it--;
                finalVal = it->second;
                break;
            }
        }
        std::cout << tok1 << " => " << tok2 << " = " << finalVal * val << std::endl;
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
