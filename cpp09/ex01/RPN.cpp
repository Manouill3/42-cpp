#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &obj) {stack = obj.stack;}

RPN &RPN::operator=(const RPN &obj) {
    if (this != &obj)
        stack = obj.stack;
    return *this;
}

RPN::~RPN() {}

float convToF(std::string str) {
    std::stringstream ss;
    float res;

    ss << str;
    ss >> res;

    return res;
}

std::string convToS(float val) {
    std::stringstream ss;
    std::string res;

    ss << val;
    ss >> res;

    return res;
}

int RPN::handle_error(std::string exp) {
    if (exp.empty())
        return 1;
    int count = 0;
    for (size_t i = 0; i < exp.length(); i++) {
        if (isdigit(exp[i]))
            count++;
    }
    if (count > 9)
        return 1;
    return 0;
}

void RPN::solve(std::string exp) {
    std::stringstream ss(exp);
    std::string val;

    if (handle_error(exp))
        throw std::invalid_argument("Error");
    while (ss >> val) {

        if (val[0] > 47 && val[0] < 58) {
            float nb = convToF(val);
            stack.push(nb);
        }
        else if ((val[0] == '+' || val[0] == '-' || val[0] == '*' || val[0] == '/') && stack.size() > 1) {
            float n1 = stack.top();
            stack.pop();
            float n2 = stack.top();
            stack.pop();
            if (val[0] == '+')
                stack.push(n2 + n1);
            if (val[0] == '-')
                stack.push(n2 - n1);
            if (val[0] == '*')
                stack.push(n2 * n1);
            if (val[0] == '/') {
                if (!n1)
                    throw std::invalid_argument("Error: impossible division");
                stack.push(n2 / n1);
            }
        }
        else
            throw std::invalid_argument("Error");    
    }
    if (stack.size() > 1)
        throw std::invalid_argument("Error");
    std::cout << stack.top() << std::endl;
}
