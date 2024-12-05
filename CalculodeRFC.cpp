#include <iostream>
using namespace std;

class Empleado
{
    /// @brief
private:
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    string dia;
    string mes;
    string año;

public:
    Empleado(string, string, string, string, string, string);
    void calculoRFC();
};

Empleado::Empleado(string _nombre, string _apellidoPaterno, string _apellidoMaterno, string _dia, string _mes, string _año)
{
    nombre = _nombre;
    apellidoPaterno = _apellidoPaterno;
    apellidoMaterno = _apellidoMaterno;
    dia = _dia;
    mes = _mes;
    año = _año;
}

void Empleado::calculoRFC()
{

    string posicion12 = apellidoPaterno.substr(0, 2);
    string posicion4 = nombre.substr(0, 1);
    string posicion56 = año.substr(2, 3);
    
    if(apellidoMaterno == "X") {
         std::cout << "Tu RFC sin homoclave es: " << posicion12 << apellidoMaterno << posicion4 << posicion56 << mes << dia << endl;
    } else {
         std::cout << "Tu RFC sin homoclave es: " << posicion12 << apellidoMaterno.substr(0,1) << posicion4 << posicion56 << mes << dia << endl;
    }

   

}

int main()
{
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    string dia;
    string mes;
    string year;

    std::cout << "Calculo de RFC" << std::endl;
    std::cout << "Introduce tu numbre: " << std::endl;
    std::cin >> nombre;
    std::cout << "Introduce tu apellido paterno: " << std::endl;
    std::cin >> apellidoPaterno;
    std::cout << "Introduce tu apellido materno: " << std::endl;
    std::cin >> apellidoMaterno;
    std::cout << "fecha de nacimiento (solo numeros)" << std::endl;
    std::cout << "dia (ejemplo 01): " << std::endl;
    std::cin >> dia;
    std::cout << "mes: " << std::endl;
    std::cin >> mes;
    std::cout << "año: " << std::endl;
    std::cin >> year;

    if (nombre.empty()) {
        std::cout << "Debe ingresar su nombre" << endl;
    }
    else if (apellidoPaterno.empty()) {
        std::cout << "Cebe ingresar su apellido paterno" << endl;
    } 
    else if(apellidoMaterno.empty()){
        apellidoMaterno = "X";
    } 
    else if (dia.length() < 2 || dia.empty()) {
        std::cout << "El dia debe contener 2 caracteres numericos" << dia.length() << endl;
    }
    else if (mes.length() < 2 || mes.empty()) {
        std::cout << "El mes debe contener 2 caracteres numericos" << endl;
    }
    else if (year.length() < 4 || year.empty()) {
        std::cout << "El año debe contener 4 caracteres numericos" << endl;
    }
    else {
        Empleado empleado = Empleado(nombre, apellidoPaterno, apellidoMaterno, dia, mes, year);

        empleado.calculoRFC();
    }

    return 0;
}