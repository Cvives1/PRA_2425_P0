#include "BrazoRobotico.h"
#include <iostream>

// Constructor
BrazoRobotico::BrazoRobotico(double x, double y, double z) : x(x), y(y), z(z), agarrando(false) {}

// Consultores
double BrazoRobotico::getX() const { return x; }
double BrazoRobotico::getY() const { return y; }
double BrazoRobotico::getZ() const { return z; }
bool BrazoRobotico::estaAgarrando() const { return agarrando; }

// Acciones
void BrazoRobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
    x = nuevoX;
    y = nuevoY;
    z = nuevoZ;
    std::cout << "Movido a (" << x << ", " << y << ", " << z << ")\n";
}

void BrazoRobotico::coger() {
    if (!agarrando) {
        agarrando = true;
        std::cout << "Objeto cogido.\n";
    } else {
        std::cout << "Ya está agarrando un objeto.\n";
    }
}

void BrazoRobotico::soltar() {
    if (agarrando) {
        agarrando = false;
        std::cout << "Objeto soltado.\n";
    } else {
        std::cout << "No hay objeto que soltar.\n";
    }
}

