#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &obj) {this->c = obj.c;}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &obj) {
    if (*this != obj)
        this->c = obj.c;
    return *this;
}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {return this->c.begin();}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {return this->c.end();}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {return this->c.begin();}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {return this->c.end();}

