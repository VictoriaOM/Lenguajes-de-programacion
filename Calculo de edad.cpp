#include <iostream>
using namespace std;

int main()
{
    int edad = 0;
    std::cout << "Ingrese su edad" << std::endl;
    std::cin >> edad ;
    
    if(edad < 18) {
        std::cout << "Eres menor de edad" << std::endl;
    }else {
        std::cout << "Eres mayor de edad" << std::endl;
    }
    
    return 0;
}