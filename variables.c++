#include <iostream>
#include <cmath>
#include <typeinfo>

int main() {
    // Definición de las variables
    int a = 10;
    int b = 4;
    int c;
    
    // Multiplicación
    std::cout << "La primera variable es: " << a << std::endl;
    std::cout << "El signo de la operación es: *" << std::endl;
    std::cout << "La segunda variable es: " << b << std::endl;
    c = a * b;
    std::cout << "El resultado es: " << c << std::endl;
    std::cout << "El tipo de c es: " << typeid(c).name() << std::endl;

    // División
    std::cout << "La primera variable es: " << a << std::endl;
    std::cout << "El signo de la operación es: /" << std::endl;
    std::cout << "La segunda variable es: " << b << std::endl;
    c = a / b;
    std::cout << "El resultado es: " << c << std::endl;
    std::cout << "El tipo de c es: " << typeid(c).name() << std::endl;

    // Suma
    std::cout << "La primera variable es: " << a << std::endl;
    std::cout << "El signo de la operación es: +" << std::endl;
    std::cout << "La segunda variable es: " << b << std::endl;
    c = a + b;
    std::cout << "El resultado es: " << c << std::endl;
    std::cout << "El tipo de c es: " << typeid(c).name() << std::endl;

    // Resta
    std::cout << "La primera variable es: " << a << std::endl;
    std::cout << "El signo de la operación es: -" << std::endl;
    std::cout << "La segunda variable es: " << b << std::endl;
    c = a - b;
    std::cout << "El resultado es: " << c << std::endl;
    std::cout << "El tipo de c es: " << typeid(c).name() << std::endl;

    // Potencia
    std::cout << "La primera variable es: " << a << std::endl;
    std::cout << "El signo de la operación es: **" << std::endl;
    std::cout << "La segunda variable es: " << b << std::endl;
    c = static_cast<int>(pow(a, b)); // Uso de pow() para calcular la potencia
    std::cout << "El resultado es: " << c << std::endl;
    std::cout << "El tipo de c es: " << typeid(c).name() << std::endl;

    // Módulo
    std::cout << "La primera variable es: " << a << std::endl;
    std::cout << "El signo de la operación es: %" << std::endl;
    std::cout << "La segunda variable es: " << b << std::endl;
    c = a % b;
    std::cout << "El resultado es: " << c << std::endl;
    std::cout << "El tipo de c es: " << typeid(c).name() << std::endl;
    
    return 0;
}