#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x, y, z;   // Coordenadas en 3D
    bool agarrando;    // Si está sujetando un objeto

public:
    // Constructor
    BrazoRobotico(double x=0, double y=0, double z=0);

    // Métodos consultores
    double getX() const;
    double getY() const;
    double getZ() const;
    bool estaAgarrando() const;

    // Acciones del brazo
    void mover(double nuevoX, double nuevoY, double nuevoZ);
    void coger();
    void soltar();
};

#endif

