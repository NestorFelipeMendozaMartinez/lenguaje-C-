#include <iostream>

int main() {
    // Solicitar y leer los valores de A y B
    int A, B;
    std::cout << "Ingrese valor para A: ";
    std::cin >> A;
    std::cout << "Ingrese valor para B: ";
    std::cin >> B;
    
    // Realizar las operaciones
    int suma = A + B;
    std::cout << "La suma de los números es: " << suma << std::endl;
    
    int res = A - B;
    std::cout << "La resta de los números es: " << res << std::endl;
    
    int multi = A * B;
    std::cout << "La multiplicación de los números es: " << multi << std::endl;
    
    // Se asume que la división debe manejarse para evitar división por 0
    if (B != 0) {
        double div = static_cast<double>(A) / B;
        std::cout << "La división de los números es: " << div << std::endl;
    } else {
        std::cout << "Error: División por cero no permitida" << std::endl;
    }
    
    // Comparaciones
    bool igual = (A == B);
    std::cout << "¿El número es igual? " << std::boolalpha << igual << std::endl;
    
    bool mayor = (A > B);
    std::cout << "¿El número mayor es A? " << std::boolalpha << mayor << std::endl;
    
    // Mostrar el número menor y mayor
    if (A > B) {
        std::cout << "El número mayor es: " << A << std::endl;
        std::cout << "El número menor es: " << B << std::endl;
    } else {
        std::cout << "El número mayor es: " << B << std::endl;
        std::cout << "El número menor es: " << A << std::endl;
    }
    
    return 0;
}