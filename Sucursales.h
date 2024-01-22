#ifndef PROGRAMACIONI_PROYECTO4PARCIAL_SUCURSALES_H
#define PROGRAMACIONI_PROYECTO4PARCIAL_SUCURSALES_H

#include <iostream>
#include <string>
class Sucursal {
public:
    Sucursal(const std::string& Nombre, int AlambreCobre, int TuboPbc)
            : Nombre(Nombre), NumeroAlambreCobre(AlambreCobre), NumeroTuboPbc(TuboPbc) {}
    void verInventario() {
        std::cout << "Inventario de la sucursal " << Nombre << std::endl;
        std::cout << "Alambre de Cobre: " << NumeroAlambreCobre << std::endl;
        std::cout << "Tubo PBC: " << NumeroTuboPbc << std::endl;
    }

    void modInventario() {
        int NewAlambreCobre, NewTuboPbc;
        std::cout << "Ingrese la nueva cantidad de Alambre de Cobre: ";
        std::cin >> NewAlambreCobre;
        std::cout << "Ingrese la nueva cantidad de Tubo PBC: ";
        std::cin >> NewTuboPbc;
        NumeroAlambreCobre = NewAlambreCobre;
        NumeroTuboPbc = NewTuboPbc;
        std::cout << "Inventario actualizado correctamente." << std::endl;
    }

    // Función para elegir qué sucursal se va a trabajar
    void ElegirSucursal() {
        char opcionmod;
        int opcion;
        std::cout << std::endl << "======= INVENTARIO =======" << std::endl;
        std::cout << "|                        |" << std::endl;
        std::cout << "|  Sucursal Patria (1)  |" << std::endl;
        std::cout << "|  Sucursal Inglaterra (2)  |" << std::endl;
        std::cout << "|  Sucursal Mixticotl (3)  |" << std::endl;
        std::cout << "|                        |" << std::endl;
        std::cout << "    Elija Sucursal: ";
        std::cin >> opcion;
        std::cout << "|                        |" << std::endl;
        std::cout << "==========================" << std::endl;

        switch (opcion) {
            case 1:
                sucursal1.verInventario();
                std::cout << "Deseas Modificar? Y(1)/N(0)" << std::endl;
                std::cin >> opcionmod;
                if(opcionmod == "y")
                {
                    sucursal1.modInventario();
                }
                if(opcionmod == "n")
                {
                    ElegirSucursal();
                }
                else
                {
                    std::cout << "Error... Error... Reinicie el programa..." << std::endl;
                }
                break;
            case 2:
                sucursal2.verInventario();
                std::cout << "Deseas Modificar? Y(1)/N(0)" << std::endl;
                std::cin >> opcionmod;
                if(opcionmod == "y")
                {
                    sucursal1.modInventario();
                }
                if(opcionmod == "n")
                {
                    ElegirSucursal();
                }
                else
                {
                    std::cout << "Error... Error... Reinicie el programa..." << std::endl;
                }
                break;
            case 3:
                sucursal3.verInventario();
                std::cout << "Deseas Modificar? Y(1)/N(0)" << std::endl;
                std::cin >> opcionmod;
                if(opcionmod == "y")
                {
                    sucursal1.modInventario();
                }
                if(opcionmod == "n")
                {
                    ElegirSucursal();
                }
                else
                {
                    std::cout << "Error... Error... Reinicie el programa..." << std::endl;
                }
                break;
            default:
                std::cout << "Opción no válida. Reinicia el programa..." << std::endl;
        }
    }

private:
    std::string Nombre;
    int NumeroAlambreCobre;
    int NumeroTuboPbc;
    static Sucursal sucursal1;
    static Sucursal sucursal2;
    static Sucursal sucursal3;
};
Sucursal Sucursal::sucursal1("Sucursal Patria", 21, 42);

Sucursal Sucursal::sucursal2("Sucursal Inglaterra", 11, 31);

Sucursal Sucursal::sucursal3("Sucursal Mixticotl", 16, 27);
#endif
