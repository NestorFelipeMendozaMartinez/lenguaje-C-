#include <iostream>

int main() {
    // Primer bloque: Contador con while
    int contador = 0;
    while (contador < 30) {
        contador++;
        std::cout << "Iteración " << contador << std::endl;
    }

    // Segundo bloque: Combinado con if-else
    int a;
    while (true) {
        std::cout << "Introduzca un valor mayor a 10:" << std::endl;
        std::cin >> a;
        
        if (a > 10) {
            std::cout << "Es correcto" << std::endl;
        } else {
            std::cout << "Es incorrecto, pruebe de nuevo" << std::endl;
            break;  // Sale del ciclo while si el valor ingresado es incorrecto
        }
    }
    
    return 0;
}