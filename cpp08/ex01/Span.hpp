#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

class Span {

    private :

        std::vector<int> tab;
        unsigned int max;

    public :

        Span();
        Span(unsigned int n);
        Span(const Span &obj);
        Span &operator=(const Span &obj);
        ~Span();

        std::vector<int> &getTab();

        void addNumber(int val);
        void addMultiple(int pos, std::vector<int> range);
        int shortestSpan();
        int longestSpan();
};

#endif