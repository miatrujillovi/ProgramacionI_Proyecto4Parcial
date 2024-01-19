#ifndef PROGRAMACIONI_PROYECTO4PARCIAL_INVENTARIOS_H
#define PROGRAMACIONI_PROYECTO4PARCIAL_INVENTARIOS_H


#include <iostream>


class Inventario {
public:
   Inventario(int AlambreCobre, int TuboPbc)
           : NumeroAlambreCobre(AlambreCobre), NumeroTuboPbc(TuboPbc) {}


   void verInventario() {
       std::cout << "Inventario:\n";
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


private:
   int NumeroAlambreCobre;
   int NumeroTuboPbc;;
}


#endif //PROGRAMACIONI_PROYECTO4PARCIAL_INVENTARIOS_H
