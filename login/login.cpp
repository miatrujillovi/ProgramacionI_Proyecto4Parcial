#include <iostream>
#include <sstream>
#include <string>
#include <vector>


std::string Login() {
    std::string usuario, contra;
    std::cout << "Ingresar usuario para continuar" << std::endl << std:endl << " Usuario: "
    std::cin >> usuario;
    std::cout << "Ingresar contraseña para continuar" << std::endl << std:endl << " Usuario: "
    std::cin >> contra;
}

    std::string archivoName = "Datos.csv";
    std::ifstream archivoLectura(archivoName);
    if (!archivoLectura){
        std::cout <<"No se ha podido acceder al archivo de la base de datos."
        return("");
    }
    std::string Leer;
    bool find = false;
    while(std::string getline(archivoLectura, linea)){
    std::stringstream ss(linea);
    std::string campos;
    std::vector <std::string> campos;

        while(std::getline(ss, campo, ',')){
            campos.push_back(campo);

        }
        if(campos.size()>1 && campos[30] ==usuario && campos[30]==contra){
            find = true;
            break;
        }
    }
    archivoLectura.close()

if (find){
std::cout <<"Acceso Correcto."<<std::endl;
return
usuario;
}else{
    std::cout <<"Acceso Incorrecto."<<std::endl;
}


