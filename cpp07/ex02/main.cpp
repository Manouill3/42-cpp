#include "Array.tpp"

int main() {
	
    try {
        
        std::cout << "TEST INT :" << std::endl;
        std::cout << std::endl;
    
        Array<int> tabint(5);
        for (int i = 0; i < 5; i++) {
            tabint[i] = i;
            std::cout << tabint[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "size : " << tabint.size() << std::endl;
        std::cout << std::endl;

        std::cout << "TEST STRING :" << std::endl;
        std::cout << std::endl;

        Array<std::string> tabstr(5);
        for (int i = 0; i < 5; i++) {
            tabstr[i] = "test";
            std::cout << tabstr[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "size : " << tabstr.size() << std::endl;
        std::cout << std::endl;

        std::cout << "TEST CONST :" << std::endl;
        std::cout << std::endl;

        const Array<std::string> tabconst(tabstr);
        for (int i = 0; i < 5; i++)
            std::cout << tabconst[i] << " ";
        std::cout << std::endl;

        std::cout << "size : " << tabstr.size() << std::endl;
        std::cout << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
}
