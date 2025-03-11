#include <iostream>
#include <cmath>  // Para la función pow

int main() {
    // Solicitar el primer valor
    std::cout << "Ingrese el primer valor (base): " << std::endl;
    int A;
    std::cin >> A;

    // Inicializar el valor de B (en el código original no se usa, pero se podría mantener si lo deseas)
    int B = 0;

    // Solicitar el segundo valor (exponente)
    std::cout << "Ingrese el segundo valor (exponente): " << std::endl;
    int C;
    std::cin >> C;

    // Calcular la potencia
    int valor = static_cast<int>(std::pow(A, C));  // Usamos std::pow para calcular la potencia
    std::cout << "La potencia de " << A << " sobre " << C << " es: " << valor << std::endl;
    
    return 0;
}
