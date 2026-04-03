#include "MutantStack.tpp"

int main(void) {
    
	std::cout << "TEST BASIC" << std::endl;
	std::cout << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;

	std::cout << "TEST LIST" << std::endl;
	std::cout << std::endl;

	std::list<int> l;

	l.push_back(5);
	l.push_back(17);
	std::cout << l.back() << std::endl;
	l.pop_back();
	std::cout << l.size() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);

	l.push_back(0);
	std::list<int>::iterator lit = l.begin();
	std::list<int>::iterator lite = l.end();
	++lit;
	--lit;
	while (lit != lite) {
		std::cout << *lit << std::endl;
		++lit;
	}
	std::cout << std::endl;

	std::cout << "TEST CONST" << std::endl;
	std::cout << std::endl;

	const MutantStack<int> cmstack(mstack);

	MutantStack<int>::const_iterator cit = cmstack.begin();
	MutantStack<int>::const_iterator cite = cmstack.end();
	++cit;
	--cit;
	while (cit != cite) {
		std::cout << *cit << std::endl;
		++cit;
	}
	std::cout << std::endl;

	std::cout << "TEST BASIC 2" << std::endl;
	std::cout << std::endl;

	MutantStack<int> mstack2;

	mstack2.push(2);
	std::cout << mstack2.top() << std::endl;
	mstack2.pop();
	mstack2.push(53);
	mstack2.push(69);
	mstack2.push(87);
	mstack2.push(9621);
	mstack2.push(1);
	
	std::cout << mstack2.size() << std::endl;
	MutantStack<int>::iterator it2 = mstack2.begin();
	MutantStack<int>::iterator ite2 = mstack2.end();
	++it2;
	--it2;
	while (it2 != ite2) {
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::cout << std::endl;

	std::cout << "TEST LIST 2" << std::endl;
	std::cout << std::endl;

	std::list<int> l2;

	l2.push_back(2);
	std::cout << l2.back() << std::endl;
	l2.pop_back();
	l2.push_back(53);
	l2.push_back(69);
	l2.push_back(87);
	l2.push_back(9621);
	l2.push_back(1);
	
	std::cout << l2.size() << std::endl;
	std::list<int>::iterator lit2 = l2.begin();
	std::list<int>::iterator lite2 = l2.end();
	++lit2;
	--lit2;
	while (lit2 != lite2) {
		std::cout << *lit2 << std::endl;
		++lit2;
	}
	std::cout << std::endl;

	std::cout << "TEST CONST 2" << std::endl;
	std::cout << std::endl;

	const MutantStack<int> cmstack2(mstack2);

	MutantStack<int>::const_iterator cit2 = cmstack2.begin();
	MutantStack<int>::const_iterator cite2 = cmstack2.end();
	++cit2;
	--cit2;
	while (cit2 != cite2) {
		std::cout << *cit2 << std::endl;
		++cit2;
	}
	std::cout << std::endl;
}
