#include <iostream>
#include <vector>
#include <map>

int main() {
    // Crear la lista de nombres
    std::vector<std::string> nombres = {"Esteban", "Hans", "Jhon", "Juan Pablo"};

    // Imprimir los nombres
    for (const std::string& nombre : nombres) {
        std::cout << nombre << std::endl;
    }

    // Crear la lista de personas (como lista de mapas)
    std::vector<std::map<std::string, std::string>> personas;

    // Crear los mapas para cada persona
    std::map<std::string, std::string> a;
    a["nombre"] = "Esteban";
    a["Edad"] = "28";

    std::map<std::string, std::string> b;
    b["nombre"] = "Hans";
    b["Edad"] = "27";

    std::map<std::string, std::string> c;
    c["nombre"] = "Jhon";
    c["Edad"] = "41";

    std::map<std::string, std::string> d;
    d["nombre"] = "Juan Pablo";
    d["Edad"] = "23";

    // Agregar los mapas a la lista
    personas.push_back(a);
    personas.push_back(b);
    personas.push_back(c);
    personas.push_back(d);

    // Imprimir los nombres y edades
    for (const auto& persona : personas) {
        std::cout << persona.at("nombre") << " " << persona.at("Edad") << std::endl;
    }

    return 0;
}