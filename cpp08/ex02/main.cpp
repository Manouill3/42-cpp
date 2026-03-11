#include "MutantStack.tpp"

int main(void) {
    std::cout << "---------------------------" << std::endl;
	std::cout << "        MUTANTSTACK        " << std::endl;
	std::cout << "---------------------------" << std::endl << std::endl;
	
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
    mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "nb : " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << "         STD::LIST         " << std::endl;
	std::cout << "---------------------------" << std::endl << std::endl;

	std::list<int> lstack;
	lstack.push_back(5);
	lstack.push_back(17);
	std::cout << "back : " << lstack.back() << std::endl;
	lstack.pop_back();
	std::cout << "size : " << lstack.size() << std::endl;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	lstack.push_back(0);
	std::list<int>::iterator lit = lstack.begin();
	std::list<int>::iterator lite = lstack.end();
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << "nb : " << *lit << std::endl;
		++lit;
	}
	std::stack<int> ls(mstack);

    std::cout << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << "        MUTANTSTACK        " << std::endl;
	std::cout << "---------------------------" << std::endl << std::endl;

	MutantStack<int>::const_iterator cit = mstack.begin();
	MutantStack<int>::const_iterator cite = mstack.end();
	
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

	MutantStack<int>::const_reverse_iterator crit = mstack.rbegin();
	MutantStack<int>::const_reverse_iterator crite = mstack.rend();
	
	++cit;
	--cit;

	++rit;
	--rit;

	++crit;
	--crit;
	
	std::cout << "const_iterator: ";
	while (cit != cite){std::cout << *cit << ", ";++cit;}
	std::cout << std::endl << std::endl;

	std::cout << "reverse_iterator: ";
	while (rit != rite){std::cout << *rit << ", ";++rit;}
	std::cout << std::endl << std::endl;

	std::cout << "const_reverse_iterator: ";
	while (crit != crite){std::cout << *crit << ", ";++crit;}
	std::cout << std::endl << std::endl;


	std::cout << "---------------------------" << std::endl;
	std::cout << "         STD::LIST         " << std::endl;
	std::cout << "---------------------------" << std::endl << std::endl;

	std::list<int>::const_iterator clit = lstack.begin();
	std::list<int>::const_iterator clite = lstack.end();
	
	std::list<int>::reverse_iterator rlit = lstack.rbegin();
	std::list<int>::reverse_iterator rlite = lstack.rend();

	std::list<int>::const_reverse_iterator crlit = lstack.rbegin();
	std::list<int>::const_reverse_iterator crlite = lstack.rend();
	
	++clit;
	--clit;

	++rlit;
	--rlit;

	++crlit;
	--crlit;
	
	std::cout << "const_iterator: ";
	while (clit != clite){std::cout << *clit << ", ";++clit;}
	std::cout << std::endl << std::endl;
	
	std::cout << "reverse_iterator: ";
	while (rlit != rlite){std::cout << *rlit << ", ";++rlit;}
	std::cout << std::endl << std::endl;

	std::cout <<"const_reverse_iterator: ";
	while (crlit != crlite){std::cout << *crlit << ", ";++crlit;}
	std::cout << std::endl << std::endl;
}
