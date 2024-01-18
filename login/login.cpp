#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

void createDatabaseFile() {
    std::ifstream file("Datos.csv");
    if (!file.good()) {
        std::ofstream outfile("Datos.csv");
        outfile << "Nombre,Apellido,Posicion,Lugar_de_trabajo,Contraseña,Horario_Laboral\n";
        outfile.close();
    }
}

std::string Login() {
    std::string usuario, contra;
    std::cout << "Ingresar usuario para continuar" << std::endl << " Usuario: ";
    std::cin >> usuario;
    std::cout << "Ingresar contraseña para continuar" << std::endl << " Contraseña: ";
    std::cin >> contra;

    std::string archivoName = "Datos.csv";
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

        if (campos.size() >= 2 && campos[0] == usuario && campos[4] == contra) {
            find = true;
            break;
        }
    }
    archivoLectura.close();

    if (find) {
        std::cout << "Acceso Correcto." << std::endl;
        return usuario;
    } else {
        std::cout << "Acceso Incorrecto." << std::endl;
        return "";
    }
}

void Logintotal() {
    Login();
}

int main() {
    createDatabaseFile();
    Logintotal();
    return 0;
}