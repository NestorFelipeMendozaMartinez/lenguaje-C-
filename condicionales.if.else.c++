#include <iostream>
#include <string>

int main() {
    // Primer bloque: Verificar si 'a' es igual a 2
    int a = 2;
    if (a == 2) {
        std::cout << "a vale 2" << std::endl;
    } else {
        std::cout << "a es diferente de 2" << std::endl;
    }

    // Segundo bloque: Concatenar condiciones con 'and' y 'not'
    std::string nombre = "Esteban";
    int edad = 28;
    std::string pais = "Colombia";

    if (nombre == "Esteban" && edad == 28 && pais == "Colombia") {
        std::cout << "Su nombre es " << nombre << ", tiene " << edad << " y es de " << pais << std::endl;
    } else if (nombre == "Esteban" && edad != 28) {
        std::cout << "Su nombre es Esteban y no tiene 28 años" << std::endl;
    } else if (nombre != "Esteban" && edad == 28) {
        std::cout << "Su nombre no es Esteban y tiene 28 años" << std::endl;
    } else {
        std::cout << "No se llama Esteban ni tiene 28 años" << std::endl;
    }

    return 0;
}