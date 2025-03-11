#include <iostream>
#include <string>

int main() {
    // Variables para almacenar los datos del usuario
    std::string nombres, apellidos, profesion;
    int anioNacimiento;
    
    // Pedir al usuario que ingrese sus datos
    std::cout << "Escriba sus nombres completos: ";
    std::getline(std::cin, nombres);
    
    std::cout << "Escriba sus Apellidos completos: ";
    std::getline(std::cin, apellidos);
    
    std::cout << "Escriba su profesion: ";
    std::getline(std::cin, profesion);
    
    std::cout << "Escriba su año de nacimiento: ";
    std::cin >> anioNacimiento;
    
    // Calcular la edad en base al año actual (2025)
    int edad = 2025 - anioNacimiento;
    
    // Mostrar el resultado
    std::cout << "El (La) " << profesion << " " << nombres << " " << apellidos << " tiene " << edad << " años" << std::endl;
    
    return 0;
}