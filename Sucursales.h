//Libreria Sucursales

#include <iostream>
#include <string>

class Sucursal {
public:
    Sucursal(const std::string& Nombre, int Alambrecobre, int TuboPbc)
            : Nombre(Nombre), NumeroAlambreCobre(AlambreCobre), NumeroTuboPbc(TuboPbc) {}

    void verinventario()
    {
        std::cout << "Inventario de la sucursal " << nombre << endl;
        std::cout << "Alambre de Cobre: " << cantidadTomates << endl;
        std::cout << "Tubo PBC: " << cantidadLechugas << endl;
    }

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

void EleguirSucursal(){
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


    switch(opcion){
        case 1:{
            std::cout << ;
        }
            break;
        case 2:{
            std::cout << ;
        }
            break;
        case 3:{
            std::cout << ;
        }
            break;
        default:
            exit ( 0);
    }

};

}

//Inventarios
//Sucursal 1 2 3

//Cosa 1 (cantidad)
//Cosa 2 (cantidad)
//Cosa 3 (cantidad)
//Cambiar Inventario
