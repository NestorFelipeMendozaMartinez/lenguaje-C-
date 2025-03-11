#include <iostream>
#include <vector>
#include <variant>

int main() {
    // Crear la lista
    std::vector<std::string> lista = {"Lunes", "Martes", "Miercoles", "Jueves", "viernes", "sabado"};
    
    // Imprimir el elemento en la posición 4 (comienza en 0)
    std::cout << lista[4] << std::endl;
    
    // Imprimir la lista completa
    for (const auto& dia : lista) {
        std::cout << dia << " ";
    }
    std::cout << std::endl;
    
    // Sublista: Elementos desde la posición 0 hasta la 3
    for (size_t i = 0; i < 3; ++i) {
        std::cout << lista[i] << " ";
    }
    std::cout << std::endl;
    
    // Lista con diferentes tipos de datos (usando std::variant)
    using Mixto = std::variant<std::string, int, double, bool, std::vector<std::variant<std::string, int, double, bool>>>;
    std::vector<Mixto> listaMixta = {"Lunes", "Martes", "Miercoles", "Jueves", "viernes", "sabado", 1, 2, 3};
    
    // Crear una lista interna dentro de la lista principal
    std::vector<Mixto> datosEsteban = {"Esteban", 0.2, 2.25, true};
    
    // Agregar la lista interna a la lista principal
    listaMixta.push_back(datosEsteban);
    
    // Imprimir la sublista (primeros 4 elementos)
    for (size_t i = 0; i < 4; ++i) {
        std::visit([](auto&& arg) { std::cout << arg << " "; }, listaMixta[i]);
    }
    std::cout << std::endl;
    
    // Imprimir los primeros 3 elementos de la lista interna
    if (std::holds_alternative<std::vector<Mixto>>(listaMixta[9])) {
        auto subLista = std::get<std::vector<Mixto>>(listaMixta[9]);
        for (size_t i = 0; i < 3; ++i) {
            std::visit([](auto&& arg) { std::cout << arg << " "; }, subLista[i]);
        }
        std::cout << std::endl;
    }
    
    return 0;
}