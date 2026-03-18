#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

class RPN {

    private :

        std::stack<float> stack;

    public :

        RPN();
        RPN(const RPN &obj);
        RPN &operator=(const RPN &obj);
        ~RPN();

        void solve(std::string exp);

};

#endif