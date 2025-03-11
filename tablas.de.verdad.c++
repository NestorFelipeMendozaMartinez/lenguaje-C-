#include <iostream>

int main() {
    // Definir las variables booleanas
    bool a = true;
    bool b = false;
    
    // Operación lógica 'and'
    std::cout << (a && b) << std::endl;
    
    // Definir variables numéricas
    int x = 2;
    int y = 3;
    int z = 4;
    int w = 10;
    
    // Operación lógica con comparación '==', '<' y '>'
    std::cout << (x == y && z < w) << std::endl;
    
    // Operación lógica con 'not' (invertir una condición)
    std::cout << (!(x == y) && z > w) << std::endl;
    
    return 0;
}