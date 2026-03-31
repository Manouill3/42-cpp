#include "easyfind.tpp"

int main(void) {

    std::cout << "VECTOR TEST :" << std::endl;
    std::cout << std::endl;

    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    for (int i = 0; i < 5; i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;
    std::cout << std::endl;

    easyfind(v, 2);
    easyfind(v, 5);
    easyfind(v, 4);
    std::cout << std::endl;

    std::cout << "LIST TEST :" << std::endl;
    std::cout << std::endl;

    std::list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(4);
    for (std::list<int>::iterator it = l.begin(); it != l.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << std::endl;

    easyfind(l, 2);
    easyfind(l, 5);
    easyfind(l, 4);
    std::cout << std::endl;

    std::cout << "RANDOM TEST :" << std::endl;
    std::cout << std::endl;

    srand(time(0));
    std::vector<int> r;

    for (int i = 0; i < 10; i++) {
        r.push_back(rand() % 10);
        std::cout << r[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;

    easyfind(v, 2);
    easyfind(v, 5);
    easyfind(v, 4);
    
}