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

void RPN::solve(std::string exp) {
    std::stringstream ss(exp);
    std::string val;

    while (ss >> val) {

        if (val[0] > 47 && val[0] < 58) {
            float nb = convToF(val);
            stack.push(nb);
        }
        else if (val[0] == '+' && stack.size() > 1) {
            float n1 = stack.top();
            stack.pop();
            float n2 = stack.top();
            stack.pop();
            stack.push(n2 + n1);
        }
        else if (val[0] == '-' && stack.size() > 1) {
            float n1 = stack.top();
            stack.pop();
            float n2 = stack.top();
            stack.pop();
            stack.push(n2 - n1);
        }
        else if (val[0] == '*' && stack.size() > 1) {
            float n1 = stack.top();
            stack.pop();
            float n2 = stack.top();
            stack.pop();
            stack.push(n2 * n1);
        }
        else if (val[0] == '/' && stack.size() > 1) {
            float n1 = stack.top();
            stack.pop();
            float n2 = stack.top();
            stack.pop();
            if (!n1)
                throw std::invalid_argument("Error: impossible division");
            stack.push(n2 / n1);
        }
        else
            throw std::invalid_argument("Error: invalid input");    
    }

    std::cout << stack.top() << std::endl;
}
