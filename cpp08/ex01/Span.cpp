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
        throw std::invalid_argument("ERROR: max reached");
    else
        tab.push_back(val);
}

int Span::shortestSpan() {
    if (tab.size() < 2)
        throw std::invalid_argument("ERROR: tab not lomg enough");

    std::vector<int> tmp = tab;
    std::sort(tmp.begin(), tmp.end());
    int shortest = tmp[1] - tmp[0];
    for (unsigned int i = 0; i < tmp.size() - 1; i++) {
        if (tmp[i + 1] - tmp[i] < shortest)
            shortest = tmp[i + 1] - tmp[i];
    }

    return shortest;
}

int Span::longestSpan() {
    if (tab.size() < 2)
        throw std::invalid_argument("ERROR: tab not lomg enough");

    std::vector<int> tmp = tab;
    std::sort(tmp.begin(), tmp.end());
    int longest = tmp[tmp.size() - 1] - tmp[0];

    return longest;
}

std::vector<int> &Span::getTab() {
    return tab;
}
