// inventario.h
#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <iostream>

class Inventario {
public:
    Inventario(int AlambreCobre, int TuboPbc);

    void verInventario();
    void modInventario();

private:
    int NumeroAlambreCobre;
    int NumeroTuboPbc;
};

#endif // INVENTARIO_H
