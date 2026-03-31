#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T> {

    public :

        MutantStack();
        MutantStack(const MutantStack &obj);
        MutantStack &operator=(const MutantStack &obj);
        ~MutantStack();
    
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end();

        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        const_iterator begin() const;
        const_iterator end() const;
};

#endif