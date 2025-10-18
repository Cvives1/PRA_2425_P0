#include <iostream>
#include "BrazoRobotico.h"

int main() {
    BrazoRobotico brazo;  // Crear instancia

    // Mover el brazo
    brazo.mover(10, 5, 3);

    // Coger un objeto
    brazo.coger();

    // Mostrar información por pantalla
    std::cout << "Posición actual: (" 
              << brazo.getX() << ", " 
              << brazo.getY() << ", " 
              << brazo.getZ() << ")\n";

    std::cout << "¿Agarrando objeto? " 
              << (brazo.estaAgarrando() ? "Sí" : "No") << "\n";

    // Soltar el objeto
    brazo.soltar();
    std::cout << "¿Agarrando objeto? " 
              << (brazo.estaAgarrando() ? "Sí" : "No") << "\n";

    return 0;
}

