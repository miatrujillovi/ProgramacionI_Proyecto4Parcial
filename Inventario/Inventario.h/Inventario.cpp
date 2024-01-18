#include "Inventario.h"

Inventario::Inventario(int AlambreCobre, int TuboPbc)
    : NumeroAlambreCobre(AlambreCobre), NumeroTuboPbc(TuboPbc) {}

void Inventario::verInventario() {
    std::cout << "Inventario:\n";
    std::cout << "Alambre de Cobre: " << NumeroAlambreCobre << std::endl;
    std::cout << "Tubo PBC: " << NumeroTuboPbc << std::endl;
}

void Inventario::modInventario() {
    int NewAlambreCobre, NewTuboPbc;
    std::cout << "Ingrese la nueva cantidad de Alambre de Cobre: ";
    std::cin >> NewAlambreCobre;
    std::cout << "Ingrese la nueva cantidad de Tubo PBC: ";
    std::cin >> NewTuboPbc;
    NumeroAlambreCobre = NewAlambreCobre;
    NumeroTuboPbc = NewTuboPbc;
    std::cout << "Inventario actualizado correctamente." << std::endl;
}
