#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
    srand(time(0));
    int randomNumber = rand() % 4;
    
    switch (randomNumber) {
        case 0 :
            return new A();
        case 1 :
            return new B();
        case 2 :
            return  new C();
        default :
            return NULL;    
    }
}

void identify(Base *p) {
    if (dynamic_cast<A*>(p))
        std::cout << "The type of p is A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "The type of p is B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "The type of p is C" << std::endl;
    else
        std::cout << "The type of p is unknown" << std::endl;
}

void identify(Base &p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "The type of p is A" << std::endl;
    }
    catch (...) {
        try {
            (void)dynamic_cast<B&>(p);
            std::cout << "The type of p is B" << std::endl;
        }
        catch (...) {
            try {
                (void)dynamic_cast<C&>(p);
                std::cout << "The type of p is C" << std::endl;
            }
            catch (...) {
                std::cout << "The type of p is unknown" << std::endl;
            }
        }
    }
}

int main(void) {
    for (size_t i = 0; i < 20; i++)
    {
        Base *randomtype;

        randomtype = generate();
        identify(randomtype);
        identify(*randomtype);
        delete randomtype;
    }
}