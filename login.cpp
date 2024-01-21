#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Usuarios.h"

void createDatabaseFile() {
    std::ifstream file("BDPrincipal.csv");
    if (!file.good()) {
        std::ofstream outfile("BDPrincipal.csv");
        outfile << "ID,Puesto,Nombre,Direccion,EstadoCivil,RFC,Salario,NumeroCuenta,NumeroSeguroSocial,FechaContratacion_Dia,FechaContratacion_Mes,FechaContratacion_Year,EstadoEmpresa,Usuario,Contraseña\n";
        outfile.close();
    }
}
int rango;
std::string Login() {
    std::string usuario, contra;
    std::cout << "Ingresar usuario para continuar" << std::endl << " Usuario: ";
    std::cin >> usuario;
    std::cout << "Ingresar contraseña para continuar" << std::endl << " Contraseña: ";
    std::cin >> contra;

    std::string archivoName = "BDPrincipal.csv";
    std::ifstream archivoLectura(archivoName);
    if (!archivoLectura.is_open()) {
        std::cout << "No se ha podido acceder al archivo de la base de datos." << std::endl;
        return "";
    }

    std::string linea;
    bool find = false;
    while (std::getline(archivoLectura, linea)) {
        std::stringstream ss(linea);
        std::string campo;
        std::vector<std::string> campos;

        while (std::getline(ss, campo, ',')) {
            campos.push_back(campo);
        }

        if (campos.size() >= 2 && campos[13] == usuario && campos[14] == contra) {
            find = true;
            if(campos.size()>=2 && campos[1]=="jefe"||campos[1]=="Jefe"){
                rango=0;
                break;}
            if(campos.size()>=2 && campos[1]=="gerente"||campos[1]=="Gerente"){
                rango=1;
                break;}
            if(campos.size()>=2 && campos[1]=="contador"||campos[1]=="Contador"){
                rango=2;
                break;}
            if(campos.size()>=2 && campos[1]=="almacenes"||campos[1]=="Almacenes"){
                rango=3;
                break;}
            if(campos.size()>=2 && campos[1]=="empleado"||campos[1]=="Empleado"){
                rango=4;
                break;}

            break;
        }
    }
    archivoLectura.close();

    if (find) {
        std::cout << "Acceso Correcto." << std::endl;
        std::cout<<rango;
        return usuario;

    } else {
        std::cout << "Acceso Incorrecto." << std::endl;
        return "";
    }
}
void LoginTotal() {
    createDatabaseFile();
    Login();
    openMenu();
}

void openMenu(){

    switch(rango) {
            case 0:
                MenuGerente();
                break;

            case 1:
                MenuJefe();
                break;
    }

};

int main() {
    LoginTotal();
    return 0;
}