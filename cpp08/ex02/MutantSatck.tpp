#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutanStack : public std::stack<T> {

    public :

        MutanStack();
        MutantStack(const MutanStack &obj);
        MutanStack &operator=(const MutanStack &obj);
        ~MutanStack();
    
        bool empty();
        size_t size();
        T top();
        void push(T args);
        void emplace(T args);
        void pop();
        void swap(std::stack<T> obj);

        
};

#endif