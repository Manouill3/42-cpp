#include "Span.hpp"

Span::Span() {max = 0;}

Span::Span(unsigned int max) {this->max = max;}

Span::Span(const Span &obj) {
    max = obj.max;
    tab = obj.tab;
}

Span &Span::operator=(const Span &obj) {
    if (this != &obj) {
        max = obj.max;
        tab = obj.tab;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int val) {
    if (tab.size() == max)
        throw std::exception();
    else
        tab.push_back(val);
}

int Span::shortestSpan() {
    int span = tab[0] - tab[1];
    int tmp;

    if (span < 0)
        span = -span;
    if (span > tab[0])
        span = span - tab[0];
    for (size_t i = 0; i < tab.size(); i++) {
        for (size_t j = i + 1; j < tab.size(); j++) {
            tmp = tab[i] - tab[j];
            if (tmp < 0)
                tmp = -tmp;
            if (tmp > tab[i])
                tmp = tmp - tab[i];
            if (tmp < span)
                span = tmp;
        }
    }
    return span;
}

int Span::longestSpan() {
    int span = tab[0] - tab[1];
    int tmp;

    if (span < 0)
        span = -span;
    if (span > tab[0])
        span = span - tab[0];
    for (size_t i = 0; i < tab.size(); i++) {
        for (size_t j = i + 1; j < tab.size(); j++) {
            tmp = tab[i] - tab[j];
            std::cout << "tmp : " << tmp << std::endl;
            if (tmp < 0)
                tmp = -tmp;
            if (tmp > tab[i])
                tmp = tmp - tab[i];
            if (tmp > span)
                span = tmp;
            std::cout << "tab[i] : " << tab[i] << " tab[j] : " << tab[j] << std::endl;
            std::cout << "longest span : " << span << std::endl;
        }
    }
    return span;
}
