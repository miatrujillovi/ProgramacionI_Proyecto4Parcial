#include <iostream>
#include <fstream>
#include <sstream>

// Función que verifica la existencia de la base de datos, y si no, la crea.
void CreateDB(){
    std::string filename = "BDPrincipal.csv";

    if (fs::exists(filename)){

    } else {
        std::ofstream csvFile(filename);
    }
}

int main(){
    CreateDB();
}
