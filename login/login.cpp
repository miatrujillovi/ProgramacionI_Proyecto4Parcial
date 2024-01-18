#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

// Función que verifica la existencia de la base de datos, y si no, la crea.
void CreateDB(){
    std::string filename = "BDPrincipal.csv";

    // Verificamos si existe el archivo
    std::ifstream fileCheck(filename);
    if (fileCheck.good()){

    } else {
        std::ofstream csvFile(filename);

        if (!csvFile.is_open()) {
            std::cerr << "Error al abrir Base de Datos" << std::endl;
        }

        // Creamos los encabezados de la base de datos
        /*std::vector<std::string> headers = {"ID", "Puesto", "Nombre", "Direccion", "EstadoCivil", "RFC", "Salario", "NumeroCuenta", "NumeroSeguroSocial", "FechaContratacion_Dia", "FechaContratacion_Mes", "FechaContratacion_Year", "EstadoEmpresa"};
        for (size_t i = 0; i < headers.size(); i++) {
            csvFile << headers[i];
            if (i < headers_size() -1) {
                csvFile << ",";
            }
        }
        csvFile << "\n";*/
        csvFile.close();
    }
}

/* Tomado de mi main.cpp, solo usenla para testear que los menús funcionen correctamente
 *
 * Si jala a la primera, soy la reata.
 * Si no jala a la primera... es tu PC, en la mia si corre bien :D
 *
 * */

void TestMenu() {
    int option;

    std::cout << "[DEBUG] Escoge un menu" << std::endl;
    std::cout << "[1] Menu gerente" << std::endl;
    std::cout << "[2] Menu jefe" << std::endl;

    std::cin >> option;

    if(option == 1) {
        MenuGerente();
    } else if(option == 2) {
        MenuJefe();
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