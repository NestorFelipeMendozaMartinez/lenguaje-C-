#include <iostream>
#include <unordered_map>

int main() {
    // Crear un "diccionario" utilizando unordered_map en C++
    std::unordered_map<std::string, std::string> coche;

    // Agregar elementos al unordered_map
    coche["marca"] = "Ford";
    coche["color"] = "rojo";
    coche["modelo"] = "sedan";
    coche["placa"] = "ROS227";

    // Mostrar el valor de 'color'
    std::cout << coche["color"] << std::endl;

    // Cambiar el valor de 'color'
    coche["color"] = "verde";
    std::cout << coche["color"] << std::endl;

    // Mostrar el valor de 'marca'
    std::cout << coche["marca"] << std::endl;

    // Cambiar el valor de 'marca'
    coche["marca"] = "Renault";
    std::cout << coche["marca"] << std::endl;

    // Mostrar todo el unordered_map
    for (const auto& par : coche) {
        std::cout << par.first << ": " << par.second << std::endl;
    }

    return 0;
}