//Libreria Sucursales
#ifndef PROGRAMACIONI_PROYECTO4PARCIAL_SUCURSALES_H
#define PROGRAMACIONI_PROYECTO4PARCIAL_SUCURSALES_H

#include <iostream>
#include <string>

//Clase madre de la sucursal
class Sucursal {
public:
    Sucursal(const std::string& Nombre, int Alambrecobre, int TuboPbc)
            : Nombre(Nombre), NumeroAlambreCobre(AlambreCobre), NumeroTuboPbc(TuboPbc) {}
//funcion para ver las cantidades de las variables
    void verinventario()
    {
        std::cout << "Inventario de la sucursal " << nombre << endl;
        std::cout << "Alambre de Cobre: " << cantidadTomates << endl;
        std::cout << "Tubo PBC: " << cantidadLechugas << endl;
    }
//funcion para modificar las cantidades de las variables
    void modinventario()
    {
        int NewAlambreCobre, NewTuboPbc;
        std::cout << "Ingrese la nueva cantidad: ";
        std::cin >> NewAlambreCobre;
        std::cout << "Ingrese la nueva cantidad: ";
        std::cin >> NewTuboPbc;
        NumeroAlambreCobre = NewAlambreCobre;
        NumeroTuboPbc = NewTuboPbc;
        std::cout << "Inventario actualizado correctamente." << endl;
    }

private:
    std::string Nombre;
    int NumeroAlambreCobre;
    int NumeroTuboPbc;
};

Sucursal sucursal1("Sucursal Patria", 21, 42);
Sucursal sucursal2("Sucursal Inglaterra", 11, 31);
Sucursal sucursal3("Sucursal Mixticotl", 16, 27);

//funcion para eleguir que sucursal se va a trabajar
void ElegirSucursal(){
    int opcion;
    std::cout << std::endl << "======= INVENTARIO =======" << std::endl;
    std::cout << "|                        |" << std::endl;
    std::cout << "|  Sucursal Aguilas (1)  |" << std::endl;
    std::cout << "|  Sucursal Fuentes (2)  |" << std::endl;
    std::cout << "|  Sucursal Arboles (3)  |" << std::endl;
    std::cout << "|                        |" << std::endl;
    std::cout << "    Eligue Sucursal  ";
    std::cin >> opcion;
    std::cout << "|                        |" << std::endl;
    std::cout << "==========================" << std::endl;

//switch para comprobar que sucursal se eligio
    switch(opcion){
        case 1:{
            sucursal1.verinventario();
        }
            break;
        case 2:{
            sucursal2.verinventario();
        }
            break;
        case 3:{
            sucursal3.verinventario();
        }
            break;
        default:
            exit ( 0);
    }

}

#endif

