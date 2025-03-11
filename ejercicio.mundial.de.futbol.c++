#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>

// Función para obtener el ganador del partido
std::string ganadoresOctavos(const std::string& marcador, const std::string& equipo1, const std::string& equipo2) {
    std::istringstream ss(marcador);
    int goles1, goles2;
    char guion;
    ss >> goles1 >> guion >> goles2;
    return (goles1 > goles2) ? equipo1 : equipo2;
}

int main() {
    // Lista de partidos
    std::vector<std::string> equipos = {
        "1. Países_Bajos vs. Estados_Unidos",
        "2. Argentina vs. Australia",
        "3. Francia vs. Polonia",
        "4. Inglaterra vs. Senegal",
        "5. Japón vs. Croacia",
        "6. Brasil vs. Corea_del_Sur",
        "7. Marruecos vs. España",
        "8. Portugal vs. Suiza"
    };
    
    // Mapa de resultados
    std::unordered_map<std::string, std::string> resultados;
    
    // Imprimir el encabezado
    std::cout << "Mundial Qatar 2022\n\nOctavos de final\n" << std::endl;
    
    // Pedir marcadores y almacenar resultados
    for (const auto& partido : equipos) {
        std::cout << partido << std::endl;
        std::cout << "Ingrese el marcador final (Formato: 2-1): ";
        std::string marcador;
        std::cin >> marcador;
        resultados[partido] = marcador;
    }
    
    // Imprimir los ganadores
    std::cout << "\nGanadores de la fase de octavos:" << std::endl;
    for (const auto& par : resultados) {
        std::string partido = par.first;
        std::string marcador = par.second;
        
        size_t pos = partido.find(" vs. ");
        std::string equipo1 = partido.substr(3, pos - 3); // Obtener el primer equipo
        std::string equipo2 = partido.substr(pos + 5);   // Obtener el segundo equipo
        
        std::string ganador = ganadoresOctavos(marcador, equipo1, equipo2);
        std::cout << "Ganador de " << partido << " es: " << ganador << std::endl;
    }
    
    return 0;
}