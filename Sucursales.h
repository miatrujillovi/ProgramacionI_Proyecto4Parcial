//Libreria Sucursales
#include <iostream>
#include <string>


void Menu(){
    int sucursal;
    std::cout << std::endl << "======= INVENTARIO =======" << std::endl;
    std::cout << "|                        |" << std::endl;    
    std::cout << "|  Sucursal Aguilas (1)  |" << std::endl;     
    std::cout << "|  Sucursal Fuentes (2)  |" << std::endl; 
    std::cout << "|  Sucursal Arboles (3)  |" << std::endl; 
    std::cout << "|                        |" << std::endl;
    std::cout << "    Eligue Sucursal  ";
    std::cin >> sucursal;
    std::cout << "|                        |" << std::endl; 
    std::cout << "==========================" << std::endl;
    
    
    switch(sucursal){
        case 1:{
std::cout << "tilin insano";
        }
            break;
        case 2:{
std::cout << "tilin";
        }
            break;
        case 3:{
std::cout << "insano";
        }
            break;
        default:
            exit ( 0);
    }    
    
};





int main(){
Menu();  
    

    
}




//Inventarios
//Sucursal 1 2 3

//Cosa 1 (cantidad)
//Cosa 2 (cantidad)
//Cosa 3 (cantidad)
//Cambiar Inventario
