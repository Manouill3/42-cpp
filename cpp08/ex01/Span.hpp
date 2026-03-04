#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

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

        void addNumber(int val;);
        int shortestSpan();
        int longestSpan();
};

#endif