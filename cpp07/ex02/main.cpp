#include "Array.tpp"

int main() {
	
    Array<int> a(5);
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;

	std::cout << "ARRAY A:" << std::endl;

    for (unsigned int i = 0; i < a.size() - 1; ++i){
        std::cout << a[i] << ", ";
	}
	std::cout << a[a.size() - 1] << std::endl;

	
	std::cout  << std::endl;
	
	
	Array<int> b(a);

	std::cout << "ARRAY B:" << std::endl;

    for (unsigned int i = 0; i < b.size() - 1; ++i){
        std::cout << b[i] << ", ";
	}
	std::cout << b[b.size() - 1] << std::endl;

    std::cout << std::endl;
	
	std::cout << std::endl << "------------- MODIFICATION ------------" << std::endl << std::endl;

	std::cout << "a[0] = 999" << std::endl; a[0] = 999;

	std::cout << "b[0] = -42" << std::endl; b[0] = -42;

	std::cout << std::endl << "------------- PRINT ARRAY -------------" << std::endl << std::endl;


	
	std::cout << "ARRAY A:" << std::endl;

    for (unsigned int i = 0; i < a.size() - 1; ++i){
        std::cout << a[i] << ", ";
	}
	std::cout << a[a.size() - 1] << std::endl;

	
	std::cout  << std::endl;
	

	std::cout << "ARRAY B:" << std::endl;

    for (unsigned int i = 0; i < b.size() - 1; ++i){
        std::cout << b[i] << ", ";
	}
	std::cout << b[b.size() - 1] << std::endl;

	std::cout  << std::endl;

	std::cout << "ARRAY C:" << std::endl;
	
	std::srand(std::time(0));
    unsigned int size = std::rand() % 30 + 1;
    Array<int> c(size);

    for (unsigned int i = 0; i < c.size(); ++i)
        c[i] = std::rand() % 100;

    std::cout << "Array of random size " << c.size() << " and radom number is:\n";
    for (unsigned int i = 0; i < c.size() - 1; ++i){
        std::cout << c[i] << ", ";
	}
	std::cout << c[c.size() - 1] << std::endl;
	
	std::cout << std::endl << "---------------- ERROR ----------------" << std::endl << std::endl;
	
	// try {Array<int> c(-56);}
	// catch (std::exception &e){std::cout << e.what() << std::endl;}

	std::cout << "try : " << std::endl;
	
	std::cout << "b[-56] : ";
	try{std::cout << b[-56] << std::endl;}
	catch (std::exception &e){std::cout << e.what() <<" because the index is negatif" << std::endl;}

	std::cout << "b[56] : ";
	try{std::cout << b[56] << std::endl;}
	catch (std::exception &e){std::cout << e.what() << " because the index is upper than " << b.size() << std::endl;}
}
