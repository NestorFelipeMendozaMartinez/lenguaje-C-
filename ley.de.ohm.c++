#include <iostream>

int main() {
    // Variables para almacenar voltaje y resistencia
    int voltaje, resistencia;
    
    // Pedir al usuario que ingrese los valores de voltaje y resistencia
    std::cout << "Ingrese el valor del voltaje del circuito: ";
    std::cin >> voltaje;
    
    std::cout << "Ingrese el valor de la resistencia del circuito: ";
    std::cin >> resistencia;
    
    // Calcular la intensidad (amperaje)
    double intensidad = static_cast<double>(voltaje) / resistencia;
    
    // Mostrar el resultado
    std::cout << "Al conectar un resistor de R " << resistencia << " ohm a una fuente de V " << voltaje 
              << " voltaje circulara una corriente de " << intensidad << " amperios" << std::endl;
    
    return 0;
}
