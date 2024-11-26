#include <iostream>
using namespace std;
int main()
{
    double numero1;
    double numero2;
    
    std::cout << "Escribe el primer número:";
    std::cin >> numero1;
    std::cout << "Escribe el segundo numero";
    std::cin >> numero2;
    
    double suma = numero1 + numero2;
    double resta = numero1 - numero2;
    double multiplicacion = numero1 * numero2;
    double division = numero1 / numero2;
    
    std::cout << "La suma es: " << suma <<std::endl;
    std::cout << "La resta es: " << resta <<std::endl;
    std::cout << "La multiplicacion es: " << multiplicacion <<std::endl;
    std::cout << "La division es: " << division <<std::endl;

    return 0;
}