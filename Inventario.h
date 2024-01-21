#ifndef PROGRAMACIONI_PROYECTO4PARCIAL_INVENTARIOS_H
#define PROGRAMACIONI_PROYECTO4PARCIAL_INVENTARIOS_H


#include <iostream>

class Inventario {
public:
    Inventario() : NumeroAlambreCobre(34), NumeroTuboPbc(22) {}

    void crearInventario() {
        std::cout << "Ahora ingresa la cantidad de articulos que añadira.\n";

        // Preguntar al usuario la cantidad de alambre de cobre
        while (true) {
            std::cout << "Ingrese la cantidad inicial de Alambre de Cobre: ";
            if (std::cin >> NumeroAlambreCobre) {
                break;
            } else {
                std::cout << "Error. Ingrese un número válido.\n";
                limpiarBufferEntrada();
            }
        }

        // Preguntar al usuario la cantidad de tubo PBC
        while (true) {
            std::cout << "Ingrese la cantidad inicial de Tubo PBC: ";
            if (std::cin >> NumeroTuboPbc) {
                break;
            } else {
                std::cout << "Error. Ingrese un número válido.\n";
                limpiarBufferEntrada();
            }
        }

        std::cout << "Inventario creado.\n";
    }

    void verInventario() const {
        std::cout << "Inventario actual:\n";
        std::cout << "Alambre de Cobre: " << NumeroAlambreCobre << std::endl;
        std::cout << "Tubo PBC: " << NumeroTuboPbc << std::endl;
    }

    void modInventario() {
        int NewAlambreCobre, NewTuboPbc;

        // Verificar si se ingresan números válidos para Alambre de Cobre
        while (true) {
            std::cout << "Ingrese la nueva cantidad de Alambre de Cobre: ";
            if (std::cin >> NewAlambreCobre) {
                break;
            } else {
                std::cout << "Error. Ingrese un número válido.\n";
                limpiarBufferEntrada();
            }
        }

        // Verificar si se ingresan números válidos para Tubo PBC
        while (true) {
            std::cout << "Ingrese la nueva cantidad de Tubo PBC: ";
            if (std::cin >> NewTuboPbc) {
                break;
            } else {
                std::cout << "Error. Ingrese un número válido.\n";
                limpiarBufferEntrada();
            }
        }

        NumeroAlambreCobre = NewAlambreCobre;
        NumeroTuboPbc = NewTuboPbc;
        std::cout << "Inventario actualizado correctamente." << std::endl;
    }

private:
    int NumeroAlambreCobre;
    int NumeroTuboPbc;


    void limpiarBufferEntrada() const {
        std::cin.clear();
        while (std::cin.get() != '\n') ; 
    }
};

// Función para interactuar con el inventario desde el programa principal
void interactuarConInventario() {
    Inventario miInventario;

    std::cout << "Seleccione una opción:\n";
    std::cout << "1. Crear inventario\n";
    std::cout << "2. Ver inventario\n";
    std::cout << "3. Modificar inventario\n";

    int opcion;
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            miInventario.crearInventario();
            break;
        case 2:
            miInventario.verInventario();
            break;
        case 3:
            miInventario.modInventario();
            break;
        default:
            std::cout << "Opción no válida.\n";
    }
}

#endif //PROGRAMACIONI_PROYECTO4PARCIAL_INVENTARIOS_H
